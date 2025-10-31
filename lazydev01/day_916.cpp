/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 #include<bits/stdc++.h>
 using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct MetaData {
    int row;
    int col;
    int value;
    MetaData(int row, int col, int value) : row(row), col(col), value(value) {}
};

class Solution {
public:
    static bool cmp(MetaData &a, MetaData &b){
        if(a.col < b.col) return true;
        else if(a.col > b.col) return false;
        else{
            if(a.row < b.row) return true;
            else if(a.row > b.row) return false;
            else return a.value < b.value;
        }
    }

    void traverse(TreeNode* root, int row, int col, vector<MetaData> &nodes){
        if(root == NULL) return;
        MetaData m(row, col, root->val);
        nodes.push_back(m);
        if(root->left != NULL){
            traverse(root->left, row + 1, col - 1, nodes);
        }
        if(root->right != NULL){
            traverse(root->right, row + 1, col + 1, nodes);
        }
        return;
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<MetaData> nodes;
        traverse(root, 0, 0, nodes);
        sort(nodes.begin(), nodes.end(), cmp);
        vector<vector<int>> ans;
        vector<int> curr;
        int currCol = nodes[0].col;
        curr.push_back(nodes[0].value);
        for(auto i : nodes){
            cout << i.row << " " << i.col << " " << i.value << endl;
        }
        for(int i = 1; i < nodes.size(); i++){
            if(nodes[i].col == currCol){
                curr.push_back(nodes[i].value);
            }
            else{
                ans.push_back(curr);
                currCol = nodes[i].col;
                curr.clear();
                curr.push_back(nodes[i].value);
            }
        }
        if(curr.size() > 0){
            ans.push_back(curr);
        }
        return ans;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversalOptimized(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push(make_pair(root, make_pair(0, 0)));
        while(!q.empty()){
            pair<TreeNode*, pair<int, int>> curr = q.front();
            q.pop();
            nodes[curr.second.first][curr.second.second].insert(curr.first->val);
            if(curr.first->left != NULL){
                q.push(make_pair(curr.first->left, make_pair(curr.second.first - 1, curr.second.second + 1)));
            }
            if(curr.first->right != NULL){
                q.push(make_pair(curr.first->right, make_pair(curr.second.first + 1, curr.second.second + 1)));
            }
        }
        vector<vector<int>> ans;
        for(auto i : nodes){
            vector<int> curr;
            for(auto j : i.second){
                curr.insert(curr.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<pair<TreeNode*, int>> q;
        map<int, vector<int>> mp;
        q.push(make_pair(root, 0));
        while(!q.empty()){
            pair<TreeNode*, int> curr = q.front();
            mp[curr.second].push_back(curr.first->val);
            if(curr.first->left != NULL){
                q.push(make_pair(curr.first->left, curr.second + 1));
            }
            if(curr.first->right != NULL){
                q.push(make_pair(curr.first->right, curr.second + 1));
            }
            q.pop();
        }
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
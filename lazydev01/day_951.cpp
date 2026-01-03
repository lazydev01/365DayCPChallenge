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
    void zigzagTraversal(TreeNode* root, map<int, vector<int>> &mp, int level){
        if(root==NULL) return;
        mp[level].push_back(root->val);
        zigzagTraversal(root->left, mp, level+1);
        zigzagTraversal(root->right, mp, level+1);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        map<int, vector<int>> mp;
        zigzagTraversal(root, mp, 0);
        vector<vector<int>> ans;
        bool ltr = true;
        for(auto i : mp){
            vector<int> v;
            for(int j = 0; j < i.second.size(); j++){
                if(ltr) v.push_back(i.second[j]);
                else v.push_back(i.second[i.second.size()-j-1]);
            }
            ltr = !ltr;
            ans.push_back(v);
        }
        return ans;
    }
};
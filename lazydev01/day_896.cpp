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

    void preOrderT(TreeNode* root, vector<int> &ans){
        if(root == NULL) return;
        ans.push_back(root->val);
        if(root->left != NULL){
            preOrderT(root->left, ans);
        }
        if(root->right != NULL){
            preOrderT(root->right, ans);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preOrderT(root, ans);
        return ans;
    }
};

class Solution {
public:

    void postOrderT(TreeNode* root, vector<int> &ans){
        if(root == NULL) return;
        if(root->left!=NULL){
            postOrderT(root->left, ans);
        }
        if(root->right!=NULL){
            postOrderT(root->right, ans);
        }
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postOrderT(root, ans);
        return ans;
    }
};
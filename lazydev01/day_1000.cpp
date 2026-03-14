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
    bool isValidBST(TreeNode* root, long long minValue, long long maxValue){
        if(root == NULL){
            return true;
        }
        if(root->val <= minValue || root->val >= maxValue) return false;
        return isValidBST(root->left, minValue, root->val) && isValidBST(root->right, root->val, maxValue);
    }

    bool isValidBST(TreeNode* root) {
        return isValidBST(root->left, LONG_MIN, root->val) && isValidBST(root->right, root->val, LONG_MAX);
    }
};
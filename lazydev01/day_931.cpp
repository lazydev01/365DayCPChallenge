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
    int getMaxDepth(TreeNode* node, int depth){
        if(node == NULL){
            return depth;
        }
        int left = depth + 1, right = depth + 1;
        if(node->left != NULL){
            left = getMaxDepth(node->left, depth + 1);
        }
        if(node->right != NULL){
            right = getMaxDepth(node->right, depth + 1);
        }
        return max(left, right);
    }

    int maxDepth(TreeNode* root) {
        return getMaxDepth(root, 0);
    }
};
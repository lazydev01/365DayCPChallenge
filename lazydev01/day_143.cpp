#include <bits/stdc++.h>
using namespace std;


// Leetcode Beginner's Guide
// Solving your first Problem
class Solution {
public:
    int sum(int num1, int num2) {
       return num1 + num2; 
    }
};


// Additional Tools and Resources
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
    bool checkTree(TreeNode* root) {
        if(root->val == (root->left->val + root->right->val)){
            return true;
        }
        return false;
    }
};
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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    static TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder, int preStart, int preEnd, int inStart, int inEnd, map<int, int> &inMap)
    {
        if (preStart > preEnd || inStart > inEnd)
            return NULL;
        TreeNode *root = new TreeNode(preorder[preStart]);
        int inRoot = inMap[preorder[preStart]];
        int itemsLeft = inRoot - inStart;
        root->left = buildTree(preorder, inorder, preStart + 1, preStart + itemsLeft, inStart, inRoot - 1, inMap);
        root->right = buildTree(preorder, inorder, preStart + itemsLeft + 1, preEnd, inRoot + 1, inEnd, inMap);
        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        map<int, int> inMap;
        for (int i = 0; i < inorder.size(); i++)
        {
            inMap[inorder[i]] = i;
        }
        return buildTree(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1, inMap);
    }
};
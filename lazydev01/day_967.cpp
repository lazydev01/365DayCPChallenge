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
    TreeNode *buildBinTree(vector<int> &inorder, vector<int> &postorder, int inStart, int inEnd, int postStart, int postEnd, map<int, int> &inMap)
    {
        if (inStart > inEnd || postStart > postEnd)
            return NULL;

        int postRoot = postorder[postEnd];
        TreeNode *root = new TreeNode(postRoot);

        int inRoot = inMap[postRoot];
        int itemsLeft = inRoot - inStart;

        root->left = buildBinTree(inorder, postorder, inStart, inStart + itemsLeft - 1, postStart, postStart + itemsLeft - 1, inMap);
        root->right = buildBinTree(inorder, postorder, inRoot + 1, inEnd, postStart + itemsLeft, postEnd - 1, inMap);
        return root;
    }

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        map<int, int> inMap;
        for (int i = 0; i < inorder.size(); i++)
        {
            inMap[inorder[i]] = i;
        }
        return buildBinTree(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1, inMap);
    }
};
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
    TreeNode *createBST(vector<int> &num, int start, int end)
    {
        if (start > end)
        {
            return NULL;
        }
        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = createBST(num, start, mid - 1);
        root->right = createBST(num, mid + 1, end);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return createBST(nums, 0, nums.size() - 1);
    }
};
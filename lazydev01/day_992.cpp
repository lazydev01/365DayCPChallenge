#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
#define cerr \
    if (0)   \
    cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void newPalindrome()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto i : s)
        {
            mp[i]++;
        }
        int count = 0;
        for (auto i : mp)
        {
            if (count > 1)
            {
                break;
            }
            if (i.second > 1)
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    newPalindrome();
    return 0;
}

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
    TreeNode *createBST(vector<int> &preorder, int start, int end)
    {
        if (start > end)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[start]);
        int leftStart = start + 1;
        int leftEnd = start;
        for (int i = leftEnd + 1; i <= end; i++)
        {
            if (preorder[i] < preorder[start])
            {
                leftEnd++;
            }
            else
            {
                break;
            }
        }
        root->left = createBST(preorder, leftStart, leftEnd);
        root->right = createBST(preorder, leftEnd + 1, end);
        return root;
    }

    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        return createBST(preorder, 0, preorder.size() - 1);
    }
};
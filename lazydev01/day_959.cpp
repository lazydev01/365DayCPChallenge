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

void xSum()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        int maxSum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = mat[i][j];
                int tmp_i = i;
                int tmp_j = j;
                while (true)
                {
                    tmp_i--;
                    tmp_j--;
                    if (tmp_i < 0 || tmp_j < 0)
                    {
                        break;
                    }
                    sum += mat[tmp_i][tmp_j];
                }
                tmp_i = i;
                tmp_j = j;
                while (true)
                {
                    tmp_i--;
                    tmp_j++;
                    if (tmp_i < 0 || tmp_j >= m)
                    {
                        break;
                    }
                    sum += mat[tmp_i][tmp_j];
                }
                tmp_i = i;
                tmp_j = j;
                while (true)
                {
                    tmp_i++;
                    tmp_j--;
                    if (tmp_i >= n || tmp_j < 0)
                    {
                        break;
                    }
                    sum += mat[tmp_i][tmp_j];
                }
                tmp_i = i;
                tmp_j = j;
                while (true)
                {
                    tmp_i++;
                    tmp_j++;
                    if (tmp_i >= n || tmp_j >= m)
                    {
                        break;
                    }
                    sum += mat[tmp_i][tmp_j];
                }
                maxSum = max(maxSum, sum);
            }
        }
        cout << maxSum << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    xSum();
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
    int maxPathDown(TreeNode *root, int &maxi)
    {
        if (root == NULL)
            return 0;
        int left = maxPathDown(root->left, maxi);
        int right = maxPathDown(root->right, maxi);
        maxi = max(maxi, root->val + left + right);
        return max(root->val + max(left, right), 0ll);
    }

    int maxPathSum(TreeNode *root)
    {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }
};
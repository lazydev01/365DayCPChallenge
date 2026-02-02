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

void beforeAnExam()
{
    int d, sumTime;
    cin >> d >> sumTime;
    vector<int> minTime(d), maxTime(d);
    int minimumTime = 0, maximumTime = 0;
    for (int i = 0; i < d; i++)
    {
        cin >> minTime[i];
        cin >> maxTime[i];
        minimumTime += minTime[i];
        maximumTime += maxTime[i];
    }
    if (sumTime < minimumTime || sumTime > maximumTime)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int remainingTime = sumTime - minimumTime;
        for (int i = 0; i < d; i++)
        {
            int extra = 0;
            if (remainingTime != 0)
            {
                extra = maxTime[i] - minTime[i];
            }
            cout << minTime[i] + min(remainingTime, extra) << " ";
            remainingTime -= min(remainingTime, extra);
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    beforeAnExam();
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
    void flatten(TreeNode *root)
    {
        TreeNode *curr = root;
        while (curr != NULL)
        {
            if (curr->left)
            {
                TreeNode *prev = curr->left;
                while (prev->right)
                {
                    prev = prev->right;
                }
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};
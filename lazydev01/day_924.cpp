#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void password(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << (6 * ((10 - n) * (10 - n - 1)) / 2) << endl;
    }
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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(root, 0));
        while(!q.empty()){
            int size = q.size();
            int mini = q.front().second;
            int first, last;
            for(int i = 0; i < size; i++){
                int curr = q.front().second - mini;
                TreeNode* node = q.front().first;
                q.pop();
                if(i == 0){
                    first = curr;
                }
                if(i == size - 1){
                    last = curr;
                }
                if(node->left != NULL){
                    q.push(make_pair(node->left, curr * 2 + 1));
                }
                if(node->right != NULL){
                    q.push(make_pair(node->right, curr * 2 + 2));
                }
            }
            ans = max(ans, last - first + 1);
        }
        return ans;
    }
};

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    password();
    return 0;
}
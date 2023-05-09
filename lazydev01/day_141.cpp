#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

//Leetcode 75 Day 8

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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();

            if(temp->left){
                if(temp->left->val >= temp->val){
                    return false;
                }
                st.push(temp->left);
            }
            if(temp->right){
                if(temp->right->val <= temp->val){
                    return false;
                }
                st.push(temp->right);
            }
        }

        return true;
    }
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(true){
            if(root->val==p->val || root->val==q->val){
                return root;
            }
            else if(root->val>p->val && root->val>q->val){
                root = root->left;
            }
            else if(root->val<p->val && root->val<q->val){
                root = root->right;
            }
            else{
                return root;
            }
        }
        
    }
};


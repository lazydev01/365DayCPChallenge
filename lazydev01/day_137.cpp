#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Leetcode 75 Day 6

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> v;
        if(root == NULL){
            return v;
        }
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* temp = st.top();
            st.pop();
            v.push_back(temp->val);
            vector<Node*> child = temp->children;
            reverse(child.begin(), child.end());
            for(auto &i : child){
                st.push(i);
            }
        }

        return v;
    }
};

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*> qt;
        qt.push(root);


        while(!qt.empty()){
            int length = qt.size();
            vector<int> v;
            while(length--){
                TreeNode* front = qt.front();
                qt.pop();
                v.push_back(front->val);
                if(front->left)
                    qt.push(front->left);
                if(front->right)
                    qt.push(front->right);   
                
            }
            ans.push_back(v);         
        }

        return ans;
    }
};
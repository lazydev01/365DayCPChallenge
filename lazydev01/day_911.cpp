/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans;
    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;
    stack<pair<TreeNode*, int>> st;
    if(root == NULL) return ans;
    st.push(make_pair(root, 1));
    while(!st.empty()){
        pair<TreeNode*, int> curr = st.top();
        st.pop();
        if(curr.second == 1){
            preorder.push_back(curr.first->data);
            curr.second = 2;
            st.push(curr);
            if(curr.first->left != NULL){
                st.push(make_pair(curr.first->left, 1));
            }
        }
        else if(curr.second == 2){
            inorder.push_back(curr.first->data);
            curr.second = 3;
            st.push(curr);
            if(curr.first->right != NULL){
                st.push(make_pair(curr.first->right, 1));
            }
        }
        else{
            postorder.push_back(curr.first->data);
        }
    }
    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);
    return ans;
}
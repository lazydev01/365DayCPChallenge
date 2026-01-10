#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
    void addLeftBoundary(Node* node, vector<int> &left){
        Node* curr = node->left;
        while(curr){
            if(!isLeaf(curr)) left.push_back(curr->data);
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }
    
    void addRightBoundary(Node* node, vector<int> &right){
        Node* curr = node->right;
        vector<int> tmp;
        while(curr){
            if(!isLeaf(curr)) tmp.push_back(curr->data);
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        for(int i = tmp.size() - 1; i>=0; i--){
            right.push_back(tmp[i]);
        }
    }
    
    void addLeaves(Node* root, vector<int>& leaves){
        if(isLeaf(root)){
            leaves.push_back(root->data);
            return;
        }
        if(root->left) addLeaves(root->left, leaves);
        if(root->right) addLeaves(root->right, leaves);
    }
    
    bool isLeaf(Node* curr){
        if(curr->left || curr->right) return false;
        return true;
    }
    
    
  public:
    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if(!root) return ans;
        if(!isLeaf(root)) ans.push_back(root->data);
        addLeftBoundary(root, ans);
        addLeaves(root, ans);
        addRightBoundary(root, ans);
        return ans;
    }
};
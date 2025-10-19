#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
  public:
  
    void leftV(Node *root, vector<int> &ans, map<int, bool> &levelMap, int currLevel){
        if(root == NULL){
            return;
        }
        if(root->left != NULL){
            if(!levelMap[currLevel]){
                ans.push_back(root->left->data);
                levelMap[currLevel] = true;
            }
            leftV(root->left, ans, levelMap, currLevel + 1);
        }
        if(root->right != NULL){
            if(!levelMap[currLevel]){
                ans.push_back(root->right->data);
                levelMap[currLevel] = true;
            }
            leftV(root->right, ans, levelMap, currLevel + 1);
        }
    }
    
    vector<int> leftView(Node *root) {
        vector<int> ans;
        map<int, bool> mp;
        ans.push_back(root->data);
        leftV(root, ans, mp, 1);
        return ans;
    }
};
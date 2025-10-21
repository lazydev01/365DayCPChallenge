#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        q.push(make_pair(root, 0));
        while(!q.empty()){
            pair<Node*, int> curr = q.front();
            mp[curr.second] = curr.first->data;
            if(curr.first->left != NULL){
                q.push(make_pair(curr.first->left, curr.second - 1));
            }
            if(curr.first->right != NULL){
                q.push(make_pair(curr.first->right, curr.second + 1));
            }
            q.pop();
        }
        vector<int> ans;
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
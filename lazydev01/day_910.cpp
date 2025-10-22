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
    vector<int> topView(Node *root) {
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0));
        mp[0] = root->data;
        while(!q.empty()){
            pair<Node*, int> curr = q.front();
            if(curr.first->left != NULL){
                q.push(make_pair(curr.first->left, curr.second - 1));
            }
            if(curr.first->right != NULL){
                q.push(make_pair(curr.first->right, curr.second + 1));
            }
            if(mp.find(curr.second) == mp.end()){
                mp[curr.second] = curr.first->data; 
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
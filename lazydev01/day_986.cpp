#include<bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:

    Node* connect(Node* root) {
        Node* curr = root;
        if(curr == NULL) return root;
        Node* nxt = curr->left;
        while(curr!=NULL && nxt!=NULL){
            curr->left->next = curr->right;
            if(curr->next!=NULL){
                curr->right->next = curr->next->left;
            }
            if(curr->next==NULL){
                curr = nxt;
                nxt = curr->left;
            }
            else{
                curr = curr->next;
            }
        }
        return root;
    }
};
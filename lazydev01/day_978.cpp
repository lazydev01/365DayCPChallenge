#include <bits/stdc++.h> 
using namespace std;

template <typename T>
class BinaryTreeNode
{
public :
    T data;
    BinaryTreeNode < T > *left;
    BinaryTreeNode < T > *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};


void increaseChildrenSum(BinaryTreeNode<int> * root, int sumValue){
    if(root->left){
        root->left->data += sumValue;
        increaseChildrenSum(root->left, sumValue);
    }
    else if(root->right){
        root->right->data += sumValue;
        increaseChildrenSum(root->right, sumValue);
    }
}

int checkSum(BinaryTreeNode<int> * root){
    if(root==NULL){
        return 0;
    }
    int leftSum = checkSum(root->left);
    int rightSum = checkSum(root->right);
    int childrenSum = leftSum + rightSum;
    if(childrenSum > root->data){
        root->data = root->data + (childrenSum - root->data);
    }
    else if(childrenSum < root->data){
        increaseChildrenSum(root, root->data - childrenSum);
    }
    return max(childrenSum, root->data);
}

void changeTree(BinaryTreeNode < int > * root) {
    checkSum(root);
}  
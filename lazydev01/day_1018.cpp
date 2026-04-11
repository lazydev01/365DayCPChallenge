/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class TreeNode {
    public : 
        int data;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		vector<int> floorCeilOfBST(TreeNode* root,int key){
			int floor = -1, ceil = -1;
            TreeNode* temp = root;
            while(temp != NULL){
                if(key > temp->data){
                    temp = temp->right;
                }
                else{
                    if(ceil == -1){
                        ceil = temp->data;      
                    }
                    else{
                        ceil = min(ceil, temp->data);
                    }
                    temp = temp->left;
                }
            }
            temp = root;
            while(temp!=NULL){
                if(key >= temp->data){
                    if(floor == -1){
                        floor = temp->data;
                    }
                    else{
                        floor = max(floor, temp->data);
                    }
                    temp = temp->right;
                }
                else{
                    temp = temp->left;
                }
            }
            vector<int> ans;
            ans.push_back(floor);
            ans.push_back(ceil);
            return ans;
		}
};
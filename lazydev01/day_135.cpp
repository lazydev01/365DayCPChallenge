#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Leetcode 75 Day - 4

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* second = head->next;
        ListNode* third = second;
        head->next = NULL;
        int count = 1;
        while(second->next!=NULL){
            second = second->next;
            third->next = head;
            head = third;
            third = second;
            count++;
        }
        second->next=head;
        count++;
        int newCount = 0;
        if(count%2==0){
            newCount = count/2;
        }
        else{
            newCount = (count/2) + 1;
        }
        head = second;
        second = head->next;
        third = second;
        head->next=NULL;
        for(int i=0; i<newCount-1; i++){
            second = second->next;
            third->next = head;
            head = third;
            third = second;
        }
        second->next = head;
        return head;
    }
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return NULL;
        }
        ListNode* first = head->next;
        ListNode* second = head->next->next;
        
        while(first != second){
            if(first->next==NULL){
                return NULL;
            }
            first = first->next;
            if(second->next==NULL || second->next->next==NULL){
                return NULL;
            }
            second = second->next->next;
        }
        first = head;
        while(first!=second){
           first = first->next;
           second = second->next;
        }
        return first;
    }
};
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(-1);
        ListNode* iterativePointer = ans;
        while(list1!=NULL && list2!=NULL){
            if(list1==NULL){
                iterativePointer = list2;
                break;
            }
            if(list2==NULL){
                iterativePointer = list1;
                break;
            }
            if(list1->val< list2->val){
                iterativePointer->next = list1;
                list1 = list1->next;
            }
            else{
                iterativePointer->next = list2;
                list2 = list2->next;
            }
            iterativePointer = iterativePointer->next;
        } 
        return ans->next;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* second = head->next;
        ListNode* third = second;
        head->next = NULL;
        while(second->next!=NULL){
            second = second->next;
            third->next = head;
            head = third;
            third = second;
        }
        second->next = head;
        return second;
    }
};
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
    int data;
    ListNode* next;
    ListNode* random;

    ListNode() : data(0), next(nullptr), random(nullptr) {}
    ListNode(int data) : data(data), next(nullptr), random(nullptr) {}
};

ListNode* cloneALinkedListWithRandomAndNextPtr(ListNode* head){
    ListNode* temp = head;
    // Inserting the new nodes between the original nodes
    while(temp!=NULL){
        ListNode* newNode = new ListNode(temp->data);
        newNode->next = temp->next;
        temp->next = newNode;
        temp = temp->next->next;
    }
    // Setting the random pointers of deep copied list
    temp = head;
    while(temp!=NULL){
        ListNode* dummy = temp->next;
        if(temp->random!=NULL){
            dummy->random = temp->random->next;
        }
        else{
            dummy->random = NULL;
        }
        temp = temp->next->next;
    }
    temp = head;
    ListNode* ans = new ListNode(-1);
    ListNode* traversal = ans;
    while(temp!=NULL){
        traversal->next = temp->next;
        traversal = traversal->next;
        temp->next = temp->next->next;
        temp = temp->next;
    }
    return ans->next;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
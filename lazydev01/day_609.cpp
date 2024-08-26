#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

struct ListNode{
    int val;
    ListNode *next;
    ListNode *bottom;
    ListNode() : val(0), next(nullptr), bottom(nullptr) {}
    ListNode(int x) : val(x), next(nullptr), bottom(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next), bottom(nullptr) {}
    ListNode(int x, ListNode *next, ListNode *bottom) : val(x), next(next), bottom(bottom) {}
};

ListNode* initializeLinkedList(int n, vector<int> &arr){
    ListNode* head = NULL;
    ListNode* node = NULL;
    for(int i = 0; i < n; i++){
        ListNode* curr = new ListNode(arr[i]);
        if(!head){
            head = curr;
            node = curr;
        }
        else{
            head->next = curr;
            head = head->next;
        }
    }
    return node;
}


void printLinkedList(ListNode* node){
    while(node != NULL){
        cout << node->val << endl;
        node = node->next;
    }
}

ListNode* mergeTwoSortedLinkedList(ListNode* head1, ListNode* head2){
    ListNode* traversal = new ListNode(0);
    ListNode* ans = traversal;
    while(head1 != NULL && head2 != NULL){
        if(head1->val < head2->val){
            traversal->bottom = head1;
            head1 = head1->bottom;
        }
        else{
            traversal->bottom = head2;
            head2 = head2->bottom;
        }
        traversal = traversal->bottom;
    }
    if(head1!=NULL){
        traversal->bottom = head1;
    }
    if(head2!=NULL){
        traversal->bottom = head2;
    }
    return ans->bottom;
}

ListNode* flattenLinkedList(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    head->next = flattenLinkedList(head->next);
    return mergeTwoSortedLinkedList(head, head->next);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // printLinkedList(flattenLinkedList());
    return 0;
}
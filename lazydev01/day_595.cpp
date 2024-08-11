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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
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

void mergeTwoSortedLinkedList(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    ListNode* ll1 = initializeLinkedList(n, arr1);
    ListNode* ll2 = initializeLinkedList(m, arr2);
    ListNode* originalHead = new ListNode(-1);
    ListNode* next = originalHead;
    while(ll1!=NULL && ll2!=NULL){
        if(ll1->val <= ll2->val){
            next->next = ll1;
            ll1 = ll1->next;
        }
        else{
            next->next = ll2;
            ll2 = ll2->next;
        }
        next = next->next;
    }
    if(ll1==NULL){
        next->next = ll2;
    }
    else{
        next->next = ll1;
    }
    printLinkedList(originalHead->next);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mergeTwoSortedLinkedList();
    return 0;
}
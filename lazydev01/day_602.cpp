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

// This code doesn't work as We are not using the same reference of the LinkedList Node. However, the logic stands still.
void findIntersectionOfTwoLinkedList(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    ListNode* ll1 = initializeLinkedList(n, arr1);
    ListNode* ll2 = initializeLinkedList(m, arr2);
    ListNode* trav1 = ll1;
    ListNode* trav2 = ll2;
    while(trav1!=trav2){
        if(trav1==NULL){
            trav1 = ll2;
        }
        if(trav2==NULL){
            trav2 = ll1;
        }
        if(trav1==trav2){
            break;
        }
        trav1 = trav1->next;
        trav2 = trav2->next;
    }
    printLinkedList(trav1);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    findIntersectionOfTwoLinkedList();
    return 0;
}
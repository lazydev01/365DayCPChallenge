#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void plusMinusSplit(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(char c : s){
            if(c=='+'){
                count++;
            }
            else{
                count--;
            }
        }
        cout << abs(count) << endl;
    }
}

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

void deleteNthNodeFromEnd(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ListNode* head = initializeLinkedList(n, arr);
    ListNode* slow = head;
    ListNode* fast = head;
    for(int i=0; i<k; i++){
        fast = fast->next;
    }

    if(fast==NULL){
        printLinkedList(head->next);
        return;
    }

    while(fast->next!=NULL){
        slow = slow->next;
        fast = fast->next;
    }

    ListNode* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    printLinkedList(head);
    return;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // plusMinusSplit();
    deleteNthNodeFromEnd();
    return 0;
}
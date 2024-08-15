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

void addTwoNumbersRepresentedAsLinkedList(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1;
    vector<int> arr2;
    while(n1>0){
        arr1.push_back(n1%10);
        n1/=10;
    }
    while(n2>0){
        arr2.push_back(n2%10);
        n2/=10;
    }
    ListNode* ll1 = initializeLinkedList(arr1.size(), arr1);
    ListNode* ll2 = initializeLinkedList(arr2.size(), arr2);
    ListNode* head = new ListNode();
    ListNode* traversal = head;
    int carry = 0;
    while( (ll1 != NULL || ll2 != NULL) || carry) {
            int sum = 0; 
            if(ll1 != NULL) {
                sum += ll1->val; 
                ll1 = ll1 -> next; 
            }
            
            if(ll2 != NULL) {
                sum += ll2 -> val; 
                ll2 = ll2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            ListNode *node = new ListNode(sum % 10); 
            traversal -> next = node; 
            traversal = traversal -> next; 
        }
    printLinkedList(head->next);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    addTwoNumbersRepresentedAsLinkedList();
    return 0;
}
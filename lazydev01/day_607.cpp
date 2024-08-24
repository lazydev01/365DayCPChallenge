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

ListNode* reverseLinkedList(ListNode* head){
    ListNode* reversedLL = NULL;
    while(head!=NULL){
        ListNode* nextNode = head->next;
        head->next = reversedLL;
        reversedLL = head;
        head = nextNode;
    }
    return reversedLL;
}

void checkIfTheGivenListIsPalindrome(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ListNode* ll = initializeLinkedList(n, arr);
    ListNode* tortoise = ll;
    ListNode* hare = ll;
    while(hare!=NULL && hare->next!=NULL){
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    if(hare!=NULL){
        tortoise = tortoise->next;
    }
    ListNode* right_half = reverseLinkedList(tortoise);
    bool isPalindrome = true;
    while(right_half!=NULL){
        if(right_half->val != ll->val){
            isPalindrome = false;
            break;
        }
        right_half = right_half->next;
        ll = ll->next;
    }
    if(isPalindrome){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    checkIfTheGivenListIsPalindrome();
    return 0;
}
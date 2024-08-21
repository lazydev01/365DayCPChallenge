#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lineTrip(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n+1);
        arr[0] = 0;
        int maxFuelConsumption = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i+1];
            maxFuelConsumption = max(maxFuelConsumption, arr[i+1]-arr[i]);
        }
        maxFuelConsumption = max(maxFuelConsumption, 2*(k - arr[n]));
        cout << maxFuelConsumption << endl;   
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

ListNode* reverseLinkedList(ListNode* head){
    ListNode* copy = head;
    ListNode* ans = NULL;
    while(copy!=NULL){
        ListNode* next = copy->next;
        copy->next = ans;
        ans = copy;
        copy = next;
    }
    return ans;
}

ListNode* getKthNode(ListNode* head, int k){
    k--;
    while(k--){
        if(head==NULL) return NULL;
        head = head->next;
    }
    return head;
}

void reverseLinkedListInGroupsOfSizeK(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    ListNode* ll = initializeLinkedList(n, arr);
    ListNode* head = ll;
    ListNode* prev = NULL;
    while(head!=NULL){
        ListNode* kthNode = getKthNode(head, k);
        if(kthNode==NULL){
            if(prev){ 
                prev->next = head;
            }
            break;
        }
        ListNode* nextNode = kthNode->next;
        kthNode->next = NULL;
        reverseLinkedList(head);
        if(head==ll){
            ll = kthNode;
        }
        else{
            prev->next = kthNode;
        }
        prev = head;
        head = nextNode;
    }
    printLinkedList(ll);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // lineTrip();
    reverseLinkedListInGroupsOfSizeK();
    return 0;
}

/*
 1 2 3 4 5 
 3 2 1 4 5
*/
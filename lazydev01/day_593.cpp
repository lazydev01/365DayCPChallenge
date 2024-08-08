#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void goodPrefixes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int max_element = 0;
        int sum = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            max_element = max(max_element, arr[i]);
            sum += arr[i];
            if(sum - max_element == max_element){
                count++;
            }
        }
        cout << count << endl;
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

void findMiddleElementOfLinkedList(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ListNode* ll = initializeLinkedList(n, arr);
    int count = 0;
    ListNode* head = ll;
    while(ll!=NULL){
        ll = ll->next;
        count++;
    }
    int toMove = count / 2;
    while(toMove--){
        head = head->next;
    }
    printLinkedList(head);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // goodPrefixes();
    findMiddleElementOfLinkedList();
    return 0;
}

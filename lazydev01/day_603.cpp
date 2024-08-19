#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void scale(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<string> mat(n);
        for(int i=0; i<n; i++){
            cin >> mat[i];
        }
        vector<string> new_mat;
        for(int i=0; i<n; i+=k){
            string str = "";
            for(int j=0; j<n; j+=k){
                str+=(mat[i][j]);
            }
            new_mat.push_back(str);
        }
        for(int i=0; i<new_mat.size(); i++){
            cout << new_mat[i] << endl;
        }
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

void detectCycleInALinkedList(ListNode* ll){
    ListNode *tortoise = ll;
    ListNode *hare = ll;
    while(hare!=NULL && hare->next!=NULL){
        tortoise = tortoise->next;
        hare = hare->next->next;
        if(tortoise == hare){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

ListNode* getLinkedListWithCycle(){
    ListNode* head = new ListNode(1);
    ListNode* dummy = head;
    head->next = new ListNode(2);
    head=head->next;
    ListNode* cycle = new ListNode(3);
    ListNode* temp = cycle;
    cycle->next = new ListNode(4);
    cycle = cycle->next;
    cycle->next = new ListNode(5);
    cycle = cycle->next;
    cycle->next = temp;
    head->next = cycle;
    return dummy;
}

ListNode* getLinkedListWithoutCycle(){
    ListNode* head = new ListNode(1);
    ListNode* dummy = head;
    head->next = new ListNode(2);
    head=head->next;
    head->next = new ListNode(3);
    head=head->next;
    head->next = new ListNode(4);
    head=head->next;
    return dummy;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // scale();

    //With cycle
    ListNode* exampleWithCycle = getLinkedListWithCycle();
    detectCycleInALinkedList(exampleWithCycle);

    //Without cycle
    ListNode* exampleWithoutCycle = getLinkedListWithoutCycle();
    detectCycleInALinkedList(exampleWithoutCycle);
    return 0;
}
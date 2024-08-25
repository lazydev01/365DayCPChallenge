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

ListNode* startingPointOfALinkedList(ListNode* head){
    ListNode* hare = head;
    ListNode* tortoise = head;
    while(hare!=NULL && hare->next!=NULL){
        if(hare==tortoise){
            break;
        }
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    if(hare==NULL || hare->next==NULL){
        return NULL;
    }
    tortoise = head;
    while(tortoise!=hare){
        tortoise = tortoise->next;
        hare = hare->next;
    }
    return tortoise;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // startingPointOfALinkedList();
    return 0;
}
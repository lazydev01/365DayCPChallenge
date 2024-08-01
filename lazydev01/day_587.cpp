#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mostSimilarWords(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for(int i=0; i<n; i++){
            cin >> words[i];
        }
        int min_count = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int count = 0;
                for(int k=0; k<m; k++){
                    if(words[i][k] > words[j][k]){
                        count += words[i][k] - words[j][k];
                    }
                    else if(words[i][k] < words[j][k]){
                        count += words[j][k] - words[i][k];
                    }
                }
                min_count = min(count, min_count);
            }
        }
        cout << min_count << endl;
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

void reverseLinkedList(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ListNode* node = initializeLinkedList(n, arr);
    ListNode* ans = NULL;
    while(node!=NULL){
        ListNode* next = node->next;
        node->next = ans;
        ans = node;
        node = next;
    }
    printLinkedList(ans);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // mostSimilarWords();
    reverseLinkedList();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool isVowel(char c){
    if(c=='a' || c=='e'){
        return true;
    }
    return false;
}

void unnaturalLanguageProcessing(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool vowel = false;
        bool consonant = false;
        for(int i=0; i<n; i++){
            if(vowel && consonant){
                if(i!=n-1){
                    if(!isVowel(s[i+1])){
                        cout << s[i] << ".";
                        vowel = false;
                        consonant = false;
                    }
                    else{
                        cout << "." << s[i];
                        vowel = false;
                    }
                }
                else{
                    cout << s[i];
                }
            }
            else{
                if(isVowel(s[i])){
                    vowel = true;
                }
                else{
                    consonant = true;
                }
                cout << s[i];
            }
        }
        cout << endl;
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

void rotateALinkedList(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ListNode* head = initializeLinkedList(n, arr);
    if(k==0 || head==NULL){
        printLinkedList(head);
        return;
    }
    ListNode* hare = head;
    ListNode* tortoise = head;
    ListNode* prevHare = head;
    ListNode* prevTortoise = head;
    while(k--){
        prevHare = hare;
        hare = hare->next;
        if(hare==NULL){
            hare = head;
        }
    }
    while(hare!=NULL){
        prevHare = hare;
        hare = hare->next;
        prevTortoise = tortoise;
        tortoise = tortoise->next;
        if(tortoise==NULL){
            tortoise = head;
        }
    }
    prevHare->next = head;
    prevTortoise->next = NULL;
    printLinkedList(tortoise);
}

void rotateALinkedListOptimal(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ListNode* head = initializeLinkedList(n, arr);
    if(head==NULL || k==0){
        printLinkedList(head);
        return;
    }
    ListNode* traversal = head;
    int length = 1;
    while(traversal->next!=NULL){
        length++;
        traversal = traversal->next;
    }
    traversal->next = head;
    k = k%length;
    length = length - k;
    while(length--){
        traversal = traversal->next;
    }
    head = traversal->next;
    traversal->next=NULL;
    printLinkedList(head);
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // unnaturalLanguageProcessing();
    // rotateALinkedList();
    rotateALinkedListOptimal();
    return 0;
}
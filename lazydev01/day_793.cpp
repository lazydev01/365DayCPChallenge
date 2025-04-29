#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void evenOddGame(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        bool aliceTurn = true;
        int aliceScore = 0;
        int bobScore = 0;
        for(int i=0; i<n; i++){
            if(aliceTurn){
                if(arr[i]%2==0){
                    aliceScore+=arr[i];
                }
            }
            else{
                if(arr[i]%2==1){
                    bobScore+=arr[i];
                }
            }
            aliceTurn = !aliceTurn;
        }
        if(aliceScore > bobScore){
            cout << "Alice" << endl;
        }
        else if(aliceScore < bobScore){
            cout << "Bob" << endl;
        }
        else{
            cout << "Tie" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    evenOddGame();
    return 0;
}

class LFUCache {
    public:
        struct Node{
            int key, value, cnt;
            Node *next, *prev;
            Node(int _key, int _value){
                key = _key;
                value = _value;
                cnt = 1;
            }
        };
    
        struct List{
            int size;
            Node *head;
            Node *tail;
            List(){
                head = new Node(0, 0);
                tail = new Node(0, 0);
                head->next = tail;
                tail->prev = head;
                size = 0;
            }
            void addFront(Node *node){
                Node* temp = head->next;
                node->next = temp;
                node->prev = head;
                head->next = node;
                temp->prev = node;
                size++;
            }
            void removeNode(Node *node){
                Node* delPrevNode = node->prev;
                Node* delNextNode = node->next;
                delPrevNode->next = delNextNode;
                delNextNode->prev = delPrevNode;
                size--;
            }
        };
    
        map<int, Node*> keyNode;
        map<int, List*> freqListMap;
        int maxSizeCache, minFreq, curSize;
    
        LFUCache(int capacity) {
            maxSizeCache = capacity;
            minFreq = 0;
            curSize = 0;
        }
    
        void updateFreqListMap(Node* node){
            keyNode.erase(node->key);
            freqListMap[node->cnt]->removeNode(node);
            if(node->cnt == minFreq && freqListMap[node->cnt]->size == 0){
                minFreq++;
            }
            List* nextHigherFreqList = new List();
            if(freqListMap.find(node->cnt + 1) != freqListMap.end()){
                nextHigherFreqList = freqListMap[node->cnt + 1];
            }
            node->cnt+=1;
            nextHigherFreqList->addFront(node);
            freqListMap[node->cnt] = nextHigherFreqList;
            keyNode[node->key] = node;
        }
        
        int get(int key) {
            if(keyNode.find(key)!=keyNode.end()){
                Node* node = keyNode[key];
                int val = node->value;
                updateFreqListMap(node);
                return val;
            }
            return -1;
        }
        
        void put(int key, int value) {
            if(maxSizeCache == 0){
                return;
            }
            if(keyNode.find(key) != keyNode.end()){
                Node* node = keyNode[key];
                node->value = value;
                updateFreqListMap(node);
            }
            else{
                if(curSize == maxSizeCache){
                    List* list = freqListMap[minFreq];
                    keyNode.erase(list->tail->prev->key);
                    freqListMap[minFreq]->removeNode(list->tail->prev);
                    curSize--;
                }
                curSize++;
                minFreq = 1;
                List* listFreq = new List();
                if(freqListMap.find(minFreq) != freqListMap.end()){
                    listFreq = freqListMap[minFreq];
                }
                Node* node = new Node(key, value);
                listFreq->addFront(node);
                keyNode[key] = node;
                freqListMap[minFreq] = listFreq;
            }
        }
    };
    
    /**
     * Your LFUCache object will be instantiated and called as such:
     * LFUCache* obj = new LFUCache(capacity);
     * int param_1 = obj->get(key);
     * obj->put(key,value);
     */
#include <bits/stdc++.h>
using namespace std;

class LRUCache {
    public:
        class ListNode{
            public:
                int key;
                int value;
                ListNode* next;
                ListNode* prev;
                ListNode(){
                    key = -1;
                    value = -1;
                    next = nullptr;
                    prev = nullptr;
                }
                ListNode(int k, int v){
                    key = k;
                    value = v;
                    next = nullptr;
                    prev = nullptr;
                }
        };
        map<int, ListNode*> mp;
        int capacity;
        ListNode* head = new ListNode();
        ListNode* tail = new ListNode();
        LRUCache(int cap) {
            capacity = cap;
            mp.clear();
            head->next = tail;
            tail->prev = head;
        }
    
        void insertAtStart(ListNode* node){
            ListNode* first = head->next;
            node->next = first;
            first->prev = node;
            head->next = node;
            node->prev = head;
        }
    
        void deleteFromLL(ListNode* node){
            ListNode* prev = node->prev;
            ListNode* next = node->next;
            prev->next = next;
            next->prev = prev;
        }
        
        int get(int key) {
            if(mp.find(key) == mp.end()){
                return -1;
            }
            ListNode* newNode = mp[key];
            deleteFromLL(newNode);
            insertAtStart(newNode);
            return newNode->value;
        }
        
        void put(int key, int value) {
            if(mp.find(key) != mp.end()){
                ListNode* node = mp[key];
                node->value = value;
                deleteFromLL(node);
                insertAtStart(node);
            }
            else{
                if(mp.size() == capacity){
                    ListNode* lruNode = tail->prev;
                    mp.erase(lruNode->key);
                    deleteFromLL(lruNode);
                }
                ListNode* newNode = new ListNode(key, value);
                mp[key] = newNode;
                insertAtStart(newNode);
            }
        }
    };
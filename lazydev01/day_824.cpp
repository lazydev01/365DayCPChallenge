#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:

    stack<pair<int, int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int previousConsecutive = 1;
        while(!s.empty() && s.top().first <= price){
            previousConsecutive+=s.top().second;
            s.pop();
        }
        s.push(make_pair(price, previousConsecutive));
        return previousConsecutive;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
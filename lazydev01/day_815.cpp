#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int, int>> st;

    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(make_pair(val, val));
        }
        else{
            st.push(make_pair(val, min(val, st.top().second)));
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 class MinStackOptimal {
public:
    long long int min;
    stack<long long int> st;
    MinStackOptimal() {
        min = 10000000000;
    }
    
    void push(int val) {
        if(st.empty()){
            min = val;
            st.push(min);
        }
        else{
            if(val > min)  st.push(val);
            else{
                long long int newVal = (long long int)(2 * (long long int)val) - min;
                st.push(newVal);
                min = val;
            }
        }
    }
    
    void pop() {
        long long int n = st.top();
        st.pop();
        if(n < min){
            min = 2 * min - n;
        }
    }
    
    int top() {
        long long int n = st.top();
        if(min < n) return n;
        return min;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.empty() || num <= left.top()){
            left.push(num);
        }
        else{
            right.push(num);
        }

        if(left.size() > right.size() + 1){
            right.push(left.top());
            left.pop();
        }
        else if(right.size() > left.size()){
            left.push(right.top());
            right.pop();
        }
    } 
    
    double findMedian() {
        if(left.size()==right.size()){
            return ((left.top() + right.top()) * 1.0 / 2);
        }
        else{
            return left.top();
        }
    }
};
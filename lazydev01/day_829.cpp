#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        stack<int> s;
        vector<int> pse(n), nse(n);
        vector<int> ans(n+1, INT_MIN);
        for(int i = 0; i < n; i++){
            while(!s.empty() && arr[s.top()] >= arr[i]){
                s.pop();
            }
            if(s.empty()){
                pse[i] = -1;
            }
            else{
                pse[i] = s.top();
            }
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && arr[s.top()] >= arr[i]){
                s.pop();
            }
            if(s.empty()){
                nse[i] = n;
            }
            else{
                nse[i] = s.top();
            }
            s.push(i);
        }
        for(int i = 0; i < n; i++){
            int len = nse[i] - pse[i] - 1;
            ans[len] = max(ans[len], arr[i]);
        }
        for(int i = n-1; i>=1; i--){
            ans[i] = max(ans[i], ans[i + 1]);
        }
        return vector<int>(ans.begin() + 1, ans.end());
    }
};
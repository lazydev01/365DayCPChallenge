#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// LeetCode 75 Day 5

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        int i = prices.size() - 1;
        int j = prices.size() - 2;
        int max_element = prices[i];
        int max_profit = 0;
        int profit = 0;
        while(j>=0){
            int curr_element = prices[j];
            if(max_element > curr_element){
                 profit = max_element - curr_element;
            }
            max_element = max(max_element, curr_element);
            max_profit = max(max_profit, profit);
            j--;
            i--;
        }
        return max_profit;
    }
};

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        int count = 0;
        bool flag = false;
        for(auto i : m){
            if(i.second%2!=0){
                flag = true;
                count+=(i.second-1);
            }
            else{
                count+=i.second;
            }
        }
        if(flag){
            return count+1;
        }
        return count;
        
    }
};
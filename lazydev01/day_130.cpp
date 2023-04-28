/*

    Question -> https://leetcode.com/problems/running-sum-of-1d-array/description/

*/

    #include <bits/stdc++.h>
    using namespace std;
    
    #ifdef ONLINE_JUDGE
      #define cerr if(0) cerr
    #endif
    
    #define int long long int
    #define endl "\n"
    #define YES cout<<"YES\n"
    #define NO cout<<"NO\n"

    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=(nums[i]);
            ans.push_back(sum);
        }
        return ans;
    }
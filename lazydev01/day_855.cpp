#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int leastLen = INT_MAX;
        for(int i = 0; i < strs.size(); i++){
            leastLen = min(leastLen, (int)strs[i].size());
        }
        string ans = "";
        for(int i = 0; i < leastLen; i++){
            char curr = strs[0][i];
            bool unCommon = false;
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != curr){
                    unCommon = true;
                    break;
                }
            }
            if(unCommon){
                break;
            }
            else{
                ans += curr;
            }
        }
        return ans;
    }
};
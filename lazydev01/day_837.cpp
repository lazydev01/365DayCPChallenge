#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int leftLongest = 0;
        int rightLongest = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            int left = i;
            int right = i;
            while(left >= 0 && right < n && s[left] == s[right]){
                if((right - left + 1) > (rightLongest - leftLongest + 1)){
                    rightLongest = right;
                    leftLongest = left;
                }
                left--;
                right++;
            }
            left = i;
            right = i + 1;
            while(left >= 0 && right < n && s[left] == s[right]){
                if((right - left + 1) > (rightLongest - leftLongest + 1)){
                    rightLongest = right;
                    leftLongest = left;
                }
                left--;
                right++;
            }
        }
        for(int i = leftLongest; i <= rightLongest; i++){
            ans += s[i];
        }
        return ans;
    }
};
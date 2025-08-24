#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.size(); i++){
            bool possible = true;
            if(haystack[i] == needle[0]){
                for(int j = 1; j < needle.size(); j++){
                    if(haystack[i+j] != needle[j]){
                        possible = false;
                        break;
                    }
                }
                if(possible) return i;
            }
        }
        return -1;
    }
};
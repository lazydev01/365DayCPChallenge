#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> sm, st;
        for(char c : s){
            sm[c]++;
        }
        for(char c : t){
            st[c]++;
        }
        if(sm.size() != st.size()) return false;
        for(auto i : sm){
            if(sm[i.first] != st[i.first]) return false;
        }
        return true;
    }
};
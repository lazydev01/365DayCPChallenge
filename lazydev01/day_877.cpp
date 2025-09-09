#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minChar(string &s) {
        // code here
        int n = s.size();
        string r = s;
        reverse(s.begin(), s.end());
        r+='$' + s;
        int len = r.size();
        vector<int> lps(len);
        int i = 1;
        int j = 0;
        lps[0] = 0;
        while(i < len){
            if(r[i] == r[j]){
                j++;
                lps[i] = j;
                i++;
            }
            else{
                if(j!=0){
                    j = lps[j-1];
                }
                else{
                    lps[i] = j;
                    i++;
                }
            }
        }
        return n - lps[len - 1];
    }
};

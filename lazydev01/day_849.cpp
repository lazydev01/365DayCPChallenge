#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        map<int, char> mp;
        mp[1] = 'I';
        mp[5] = 'V';
        mp[10] = 'X';
        mp[50] = 'L';
        mp[100] = 'C';
        mp[500] = 'D';
        mp[1000] = 'M';
        vector<int> seq = {1000, 500, 100, 50, 10, 5, 1};
        string ans = "";
        for(int i = 0; i < seq.size(); i++){
            while(num >= seq[i]){
                if(i == 0){
                    ans += mp[seq[i]];
                    num -= seq[i];
                }
                else if(to_string(num)[0] == '9'){
                    ans += mp[seq[i+1]];
                    ans += mp[seq[i-1]];
                    num -= ((seq[i]/ 5) * 9);
                }
                else if(to_string(num)[0] == '4'){
                    ans += mp[seq[i]];
                    ans += mp[seq[i-1]];
                    num -= (seq[i] * 4);
                }
                else{
                    ans += mp[seq[i]];
                    num -= seq[i];
                }
            }
        }
        return ans;
    }
};
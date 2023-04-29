#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

*/
bool isIsomorphic(string s, string t) {
        map<char, vector<int>> map_s;
        map<char, vector<int>> map_t;
        for(int i=0; i<s.size(); i++){
            map_s[s[i]].push_back(i);
        }
        for(int i=0; i<t.size(); i++){
            map_t[t[i]].push_back(i);
        }
        set<char> set_s;
        for(int i=0; i<s.size(); i++){
            set_s.insert(s[i]);
        }
        set<char> set_t;
        for(int i=0; i<t.size(); i++){
            set_t.insert(t[i]);
        }
        string string_s = string(s.size(), '0');
        string string_t = string(s.size(), '0');
        for(auto it=set_s.begin(); it!=set_s.end(); it++){
            
            for(int j=0; j<map_s[*it].size(); j++){
                char ch = *it + '0';
                string_s[map_s[*it][j]] = ch;
            }
        }
        for(auto i : set_t){
            // for(int j=0; j<map_t[i.first].size(); j++){
            //     char ch = i + '0';
            //     string_t[map_t[i.first][j]] = ch;
            // }
        }
        cout << string_s << endl;
        cout << string_t << endl;
        return true;
    }

    bool isSubsequence(string s, string t) {
        
          int first = 0, second = 0;
    while(first != s.size() && second != t.size()){
        if(s[first] == t[second]){
            first++;
        }
        second++;
    }
    return (first == s.size());
    }
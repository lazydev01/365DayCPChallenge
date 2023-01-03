/*

Question -> https://www.codechef.com/problems/BUY1GET1

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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        map<char, int> m;
        for(int i=0; i<str.size(); i++){
            m[str[i]]++;
        }
        int count = 0;
        for(auto i: m){
            count+=((i.second+1)/2);
        }
        cout << count << endl;
    }
    return 0;
}
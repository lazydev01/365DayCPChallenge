#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void problemSolvingLog(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        int count = 0;
        for(char ch='A'; ch<='Z'; ch++){
            if(mp[ch]>ch-'A'){
                count++;
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    problemSolvingLog();
    return 0;
}
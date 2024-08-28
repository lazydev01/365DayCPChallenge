#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void distinctSplit(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp1;
        map<char, int> mp2;
        for(char c : s){
            mp2[c]++;
        }
        int max_count = mp2.size();
        int count = mp2.size();
        for(char c : s){
            if(mp1[c]==0){
                count++;
            }
            mp1[c]++;
            if(mp2[c]==1){
                count--;
            }
            mp2[c]--;
            max_count = max(count, max_count);
        }
        cout << max_count << endl;        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    distinctSplit();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void polycarpWritesAStringFromMemory(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char first = '!';
        char second = '!';
        char third = '!';
        int count = 0;
        int ans = 0;
        for(auto i : s){
            if(first == i || second == i || third == i) continue;
            if(count == 3){
                count = 0;
                ans++;
                first = '!';
                second = '!';
                third = '!';
            }
            if(first == '!'){
                first = i;
                count++;
            }
            else if(second == '!'){
                second = i;
                count++;
            }
            else if(third == '!'){
                third = i;
                count++;
            }
        }
        if(count > 0) ans++;
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    polycarpWritesAStringFromMemory();
    return 0;
}
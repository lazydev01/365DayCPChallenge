#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void coverInWater(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int maxDotsBetweenTwoBlocks = 0;
        int currBlockIndex = -1;
        for(int i=0; i<n; i++){
            if(s[i]=='#'){
                maxDotsBetweenTwoBlocks = max(maxDotsBetweenTwoBlocks, i-currBlockIndex-1);
                ans+=(i-currBlockIndex-1);
                currBlockIndex = i;
            }
        }
        maxDotsBetweenTwoBlocks = max(maxDotsBetweenTwoBlocks, n-1-currBlockIndex);
        ans+=n-1-currBlockIndex;
        if(maxDotsBetweenTwoBlocks<=2){
            cout << ans << endl;
        }
        else{
            cout << 2  << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    coverInWater();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void playingWithOr(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int odd_count = 0;
        int ans = 0;
        for(int i=0; i<k; i++){
            if(arr[i]%2!=0){
                odd_count++;
            }
        }
        if(odd_count>0){
            ans++;
        }
        for(int i=k; i<n; i++){
            if(arr[i-k]%2!=0){
                odd_count--;
            }
            if(arr[i]%2!=0){
                odd_count++;
            }
            if(odd_count>0){
                ans++;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    playingWithOr();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void encryptValue(){
    int t;
    cin >> t;
    int MOD = 1e9+7;
    while(t--){
        int n; 
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int s = 0;
        s+=arr[0];
        for(int i=1; i<n; i++){
            if(s<=1 || arr[i]==1){
                s= (s + arr[i])%MOD;
            }
            else{
                s=(s*arr[i])%MOD;
            }
        }
        cout << s << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    encryptValue();
    return 0;
}
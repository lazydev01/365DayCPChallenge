#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void prefixMinAndSuffixMax(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<int> prefixMin(n);
        vector<int> suffixMax(n);
        prefixMin[0] = arr[0];
        for(int i = 1; i < n; i++){
            prefixMin[i] = min(arr[i], prefixMin[i-1]);
        }
        suffixMax[n-1] = arr[n-1];
        for(int i = n-2; i>=0; i--){
            suffixMax[i] = max(arr[i], suffixMax[i+1]);
        }
        string ans = "";
        for(int i = 0; i < n; i++){
            if(prefixMin[i] < arr[i] && suffixMax[i] > arr[i]){
                ans+='0';
            }
            else{
                ans+='1';
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    prefixMinAndSuffixMax();
    return 0;
}
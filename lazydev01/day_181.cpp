#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximumProductSubarray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int pref = 1;
    int suf = 1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            pref = 1;
        }
        else{
            pref*=arr[i];
        }
        if(arr[n-1-i]==0){
            suf = 1;
        }
        else{   
            suf*=arr[n-1-i];
        }
        maxi = max(maxi, pref);
        maxi = max(maxi, suf);
    }
    cout << maxi  << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximumProductSubarray();
    return 0;
}
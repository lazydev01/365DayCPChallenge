#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void choosingCubes(){
    int t;
    cin >> t;
    while(t--){
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int favEl = arr[f-1];
        sort(arr.begin(), arr.end(), greater<int>());
        if(n==k){
            cout << "YES" << endl;
            continue;
        }
        if(arr[k]> favEl){
            cout << "NO" << endl;
        }
        else if((arr[k] < favEl)){
            cout << "YES" << endl;
        }
        else{
            if(k>0 && arr[k-1]==favEl){
                cout << "MAYBE" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    choosingCubes();
    return 0;
}
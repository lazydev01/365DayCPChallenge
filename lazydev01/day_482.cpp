#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lessOrEqual(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if(k==0){
        if(arr[k]==1){
            cout << -1 << endl;
        }
        else{
            cout << arr[k]-1 << endl;
        }
    }
    else if(arr[k]==arr[k-1] ){
        cout << -1 << endl;
    }
    else{
        cout << arr[k-1] << endl;
    }
}

void div7(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mod = n%7;
        if(mod==0){
            cout << n << endl;
        }
        else{
            int before = n/10;
            int add = n + (7-mod);
            int after = add/10;
            if(before==after){
                cout << add << endl;
            }
            else{
                cout << (n-mod) << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // lessOrEqual();
    div7();
    return 0;
}
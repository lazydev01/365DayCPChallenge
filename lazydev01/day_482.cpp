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

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    lessOrEqual();
    return 0;
}
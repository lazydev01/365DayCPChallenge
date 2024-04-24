#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void walletExchange(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if((a+b)%2){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
}

void makeEqual(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mini = min(mini, arr[i]);
        }
        if(arr[0]==arr[n-1] && arr[0]==mini){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // walletExchange();
    makeEqual();
    return 0;
}
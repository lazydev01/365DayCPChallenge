#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void linelandMail(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << arr[1]-arr[0] << " " << arr[n-1]-arr[0] << endl;
    for(int i=1; i<n-1; i++){
        cout << min(abs(arr[i]-arr[i-1]), abs(arr[i]-arr[i+1])) << " " << max(abs(arr[i]-arr[0]), abs(arr[i]-arr[n-1])) << endl;
    }
    cout << arr[n-1]-arr[n-2] << " " << arr[n-1]-arr[0] << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    linelandMail();
    return 0;
}
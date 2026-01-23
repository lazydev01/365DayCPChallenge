#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void assemblyViaRemainders(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n-1);
        for(int i = 0; i < n -1; i++){
            cin >> arr[i];
        }
        int curr = 10000;
        cout << curr << " ";
        for(int i = 0; i < n-1; i++){
            curr += arr[i];
            cout << curr << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    assemblyViaRemainders();
    return 0;
}
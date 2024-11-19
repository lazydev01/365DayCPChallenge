#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void quintomania(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool isPerfect = true;
        for(int i=0; i<n-1; i++){
            if(abs(arr[i]-arr[i+1])!=5 && abs(arr[i]-arr[i+1])!=7){
                isPerfect = false;
                break;
            }
        }
        if(isPerfect){
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

    quintomania();
    return 0;
}
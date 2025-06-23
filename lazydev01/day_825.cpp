#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void falseAlarm(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        int firstClosed = -1;
        int lastClosed = -1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(firstClosed == -1 && arr[i] == 1){
                firstClosed = i;
                lastClosed = i;
            }
            if(arr[i] == 1){
                lastClosed = i;
            }
        }
        if(firstClosed == -1){
            cout << "YES" << endl;
        }
        else{
            if(lastClosed - firstClosed + 1 <= x){
                cout << "YES" << endl;
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

    falseAlarm();
    return 0;
}
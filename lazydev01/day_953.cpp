#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void districtsConnection(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int firstEl = -1, secondEl = -1, firstIndex = -1, secondIndex = -1;
        for(int i = 0; i < n; i++){
            if(firstEl == -1){
                firstEl = arr[i];
                firstIndex = i+1;
            }
            else{
                if(arr[i] != firstEl){
                    secondEl = arr[i];
                    secondIndex = i+1;
                }
            }
            if(firstEl != -1 && secondEl != -1) break;
        }
        if(secondEl == -1){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(int i = 1; i < n; i++){
            if(arr[i] != firstEl){
                cout << i+1 << " " << firstIndex << endl;
            }
            else{
                cout << i+1 << " " << secondIndex << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    districtsConnection();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void vladAndCandies(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        bool flag = false;
        bool possible = false;
        bool desc = false;
        if(n==1){
            if(arr[0] == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            continue;
        }
        if(arr[0] == arr[1] + 1){
            desc = true;
        }
        else if(arr[0] == arr[1]){
            possible = true;
        }
        else{
            flag = true;
        }
        if(possible || (desc && arr[n-1] == 1) || (desc && !flag)){
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

    vladAndCandies();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"



int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        bool hasOdd = false, hasEven = false;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i]%2 == 0){
                hasEven = true;
            }
            else{
                hasOdd = true;
            }
        }
        if(hasEven && hasOdd){
            sort(arr.begin(), arr.end());
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*

3 7 5 1 2
2 7 5 1 3
1 7 5 2 3

*/
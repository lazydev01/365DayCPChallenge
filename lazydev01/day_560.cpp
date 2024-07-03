#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void constructARectangle(){
    int t;
    cin >> t;
    while(t--){
        int l1, l2, l3;
        cin >> l1 >> l2 >> l3;
        vector<int> arr = {l1, l2, l3};
        sort(arr.begin(), arr.end());
        if(arr[2] == arr[1] + arr[0] || (arr[1] == arr[2] && arr[0]%2==0) || (arr[0] == arr[2] && arr[1]%2==0) || (arr[0] == arr[1] && arr[2]%2==0)){
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

    constructARectangle();
    return 0;
}
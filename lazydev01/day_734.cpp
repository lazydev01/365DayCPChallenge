#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void preparingForTheOlympiad(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> arr2(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            cin >> arr2[i];
        }
        int m = 0, s = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr2[i+1]){
                m+=arr[i];
                s+=arr2[i+1];
            }
        }
        m+=arr[n-1];
        cout << m - s << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    preparingForTheOlympiad();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void grabTheCandies(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int mihai = 0;
        int bianca = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2==0){
                mihai += arr[i];
            }
            else{
                bianca += arr[i];
            }
        }
        if(mihai>bianca){
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
    grabTheCandies();
    return 0;
}
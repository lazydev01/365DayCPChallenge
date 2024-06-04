#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void beatTheOdds(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int even_els = 0;
        int odd_els = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2){
                odd_els++;
            }
            else{
                even_els++;
            }
        }
        cout << min(odd_els,even_els) << endl;
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    beatTheOdds();
    return 0;
}
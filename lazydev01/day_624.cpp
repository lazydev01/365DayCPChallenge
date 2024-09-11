#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void threeDoors(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(3);
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
        if(arr[n-1]==0){
            cout << "NO" << endl;
            continue;
        }
        bool valid = true;
        for(int i=0; i<3; i++){
            if(arr[i]==i+1){
                valid = false;
                break;
            }            
        }
        if(valid){
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

    threeDoors();
    return 0;
}
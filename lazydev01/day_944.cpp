#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void servalAndMochasArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool possible = false;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(__gcd(arr[i], arr[j]) <= 2){
                    possible = true;
                    break;
                }
            }
            if(possible){
                break;
            }
        }
        if(possible){
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

    servalAndMochasArray();
    return 0;
}
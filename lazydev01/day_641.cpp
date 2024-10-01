#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void prettyPermutations(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2){
            for(int i=1; i<=n-3; i++){
                if(i%2){
                    cout << i+1 << " ";
                }
                else{
                    cout << i-1 << " ";
                }
            }
            cout << n << " " << n-2 << " " << n-1 << endl;

        }
        else{
            for(int i=1; i<=n; i++){
                if(i%2){
                    cout << i+1 << " ";
                }
                else{
                    cout << i-1 << " ";
                }
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    prettyPermutations();
    return 0;
}
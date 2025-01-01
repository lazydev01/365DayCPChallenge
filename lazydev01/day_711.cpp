#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void forbiddenInteger(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        if((n==1 && x==1) || (k==1 && x==1) || (n%2==1 && k==2 && x==1)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            if(x!=1){
                cout << n << endl;
                for(int i=0; i<n; i++){
                    cout << 1 << " ";
                }
                cout << endl;
            }
            else{
                if(n%2==0){
                    cout << n/2 << endl;
                    for(int i=0; i<n/2; i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else{
                    cout << n/2 << endl;
                    for(int i=0; i<(n/2)-1; i++){
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    forbiddenInteger();
    return 0;
}
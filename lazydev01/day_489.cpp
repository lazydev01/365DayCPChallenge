#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void upScaling(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<(2*n); i++){
            for(int j=0; j<(2*n); j++){
                if((i)%4<2){
                    if(j%4<2){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
                else{
                    if(j%4<2){
                        cout << ".";
                    }
                    else{
                        cout << "#";
                    }
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

    upScaling();
    return 0;
}
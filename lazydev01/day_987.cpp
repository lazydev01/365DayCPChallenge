#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sieveOfErato67henes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ans = false;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(num == 67){
                ans = true;
            }
        }
        if(ans){
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

    sieveOfErato67henes();
    return 0;
}
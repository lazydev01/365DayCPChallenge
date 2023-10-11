#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twoButtons(){
    int n, m;
    cin >> n >> m;
    if(n>=m) cout << n-m << endl;
    else{
        int count = 0;
        while(m>n){
            if(m%2==0){
                m/=2;
            }
            else{
                m+=1;
            }
            count++;
        }
        cout << count + (n-m) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    twoButtons();
    return 0;
}
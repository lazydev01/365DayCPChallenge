#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool checkGoldNugget(int n, int m){
    if(n==m){
        return true;
    }
    if(n<m || n%3!=0){
        return false;
    }
    return checkGoldNugget(n/3, m) || checkGoldNugget(2*(n/3), m);
}

void goldRush(){
    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        if(m>n){
            cout << "NO" << endl;
        }
        else if(m==n){
            cout << "YES" << endl;
        }
        else{
            if(n%3!=0){
                cout << "NO" << endl;
            }
            else{
                if(checkGoldNugget(n, m)){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    goldRush();
    return 0;
}
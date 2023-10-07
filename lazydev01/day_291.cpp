#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

    Question -> https://codeforces.com/problemset/problem/80/A

*/

bool checkPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }
    return true;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    bool flag = false;
    for(int i=n+1; i<m; i++){
        if(checkPrime(i)){
            flag = true;
            break;
        }
    }
    if(flag || !checkPrime(m) || n>=m){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}
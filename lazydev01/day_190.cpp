#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int power(int val, int n, int m){
    long long ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans * val;
        if(ans>m){
            return 1;
        }
    }
    if(ans==m) return 0;
    return -1;
}

void nthRootOfM(){
    int n, m;
    cin >> n >> m;
    int low = 1;
    int high = m;
    bool flag = false;
    while(low<=high){
        int mid = (low+high)/2;
        int powOfMid = power(mid, n, m);
        if(powOfMid==m){
            cout << mid << endl;
            flag = true;
            break;
        }
        else if(powOfMid<m){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(!flag){
        cout << -1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
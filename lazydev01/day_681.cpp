#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int findNthPower(int n, int p){
    int ans = 1;
    for(int i=1; i<=p; i++){
        ans*=n;
    }
    return ans;
}

void nthRootOfANumber(){
    int m, n;
    cin >> m >> n;
    int left = 1;
    int right = sqrt(m);
    int ans = -1;
    while(left<=right){
        int mid = (left + right)/2;
        cout << mid << endl;
        int nthPower = 1;
        for(int i=1; i<=n; i++){
            nthPower*=mid;
            if(nthPower > m){
                break;
            }
        }
        cout << nthPower << endl;
        if(nthPower == m){
            ans = mid;
            break;
        }
        else if(nthPower > m){
            right = mid - 1;
        }
        else{
            left = mid + 1;
            cout << "Left : " << left << endl;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    nthRootOfANumber();
    return 0;
}
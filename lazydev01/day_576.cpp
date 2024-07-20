#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gridUniquePaths(){
    int n, m;
    cin >> n >> m;
    int total_steps = n + m -2;
    int right_steps = n - 1;
    int ans = 1;
    for(int i=1; i<=right_steps; i++){
        ans *= (total_steps + i - right_steps);
        ans /= i;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    gridUniquePaths();
    return 0;
}
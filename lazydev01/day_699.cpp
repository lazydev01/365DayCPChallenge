#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void pairOfTopics(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
        a[i] -= b[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for(int i=0; i<n; i++){
        int toFind = 1 - a[i];
        int index = lower_bound(a.begin()+i+1, a.end(), toFind) - a.begin();
        ans += (n-index);
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    pairOfTopics();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void assignCookies(){
    int n, m;
    cin >> n >> m;
    vector<int> greed(n);
    vector<int> cookies(m);
    for(int i=0; i<n; i++){
        cin >> greed[i];
    }
    for(int i=0; i<m; i++){
        cin >> cookies[i];
    }
    sort(greed.begin(), greed.end(), greater<int>());
    sort(cookies.begin(), cookies.end(), greater<int>());
    int i = 0;
    int j = 0;
    int cnt = 0;
    while(i<n && j<m){
        if(cookies[j]>= greed[i]){
            cnt++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout << cnt << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    assignCookies();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void bersuBall(){
    int n;
    cin >> n;
    vector<int> boys(n);
    for(int i = 0; i < n; i++){
        cin >> boys[i];
    }
    int m;
    cin >> m;
    vector<int> girls(m);
    for(int i = 0; i < m; i++){
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int i = 0, j = 0;
    int cnt = 0;
    while(i<n && j<m){
        if(boys[i]==girls[j] || boys[i]==girls[j]+1 || boys[i]==girls[j]-1){
            i++;
            j++;
            cnt++;
        }
        else if(boys[i] < girls[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout << cnt << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    bersuBall();
    return 0;
}
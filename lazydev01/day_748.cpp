#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool sortByValue(pair<int, int> &a, pair<int, int> &b){
    if(a.second < b.second){
        return true;
    }
    else if(a.second == b.second){
        return a.first < b.first;
    }
    return false;
}

void monsters(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> vp(n);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            vp[i] = make_pair(-1-(x-1)%k, i+1);
        }
        sort(vp.begin(), vp.end());
        for(int i=0; i<n; i++){
            cout << vp[i].second << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    monsters();
    return 0;
}
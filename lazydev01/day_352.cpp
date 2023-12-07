#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void laptops(){
    int t;
    cin >> t;
    vector<pair<int, int>> vp;
    while(t--){
        int a, b;
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }
    bool flag = false;
    for(int i=0; i<vp.size(); i++){
        if(vp[i].first < vp[i].second){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "Happy Alex";
    }
    else{
        cout << "Poor Alex";
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    laptops();
    return 0;
}
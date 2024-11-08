#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void downloadMoreRam(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> memory(n);
        vector<int> ram(n);
        for(int i=0; i<n; i++){
            cin >> memory[i];
        }
        for(int i=0; i<n; i++){
            cin >> ram[i];
        }
        vector<pair<int, int>> vp;
        for(int i=0; i<n; i++){
            vp.push_back(make_pair(memory[i], ram[i]));
        }
        sort(vp.begin(), vp.end());
        for(int i=0; i<n; i++){
            if(k<vp[i].first){
                break;
            }
            else{
                k+=vp[i].second;
            }
        }
        cout << k << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    downloadMoreRam();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void osuMania(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            size_t index = s.find('#');
            ans.push_back(index+1);
        }
        for(int i=ans.size()-1; i>=0; i--){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    osuMania();
    return 0;
}
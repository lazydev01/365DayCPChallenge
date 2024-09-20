#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void escalatorConversations(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        vector<int> h(n);
        int conversations = 0;
        for(int i=0; i<n; i++){
            cin >> h[i];
            int heightDifference = abs(h[i]-H);
            if(heightDifference%k==0 && (heightDifference/k)>0 && (heightDifference/k)<m){
                conversations++;
            }
        }
        cout << conversations << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    escalatorConversations();
    return 0;
}
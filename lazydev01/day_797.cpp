#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kefaAndCompany(){
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> vp;
    for(int i=0; i<n; i++){
        int m, s;
        cin >> m >> s;
        vp.push_back(make_pair(m, s));        
    }
    sort(vp.begin(), vp.end());
    int maxFriendshipFactor = vp[0].second;
    int friendshipFactor = vp[0].second;
    int minMoney = vp[0].first;
    int left = 0;
    int right = 1;
    while(right < n){
        if(vp[right].first - minMoney < d){
            friendshipFactor += vp[right].second;
            right++; 
        }
        else{
            minMoney = vp[left+1].first;
            friendshipFactor -= vp[left].second;
            left++;
        }
        maxFriendshipFactor = max(maxFriendshipFactor, friendshipFactor);
    }
    cout << maxFriendshipFactor << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kefaAndCompany();
    return 0;
}

/*

4 2
10909234 9
10909236 8
10909237 10
10909235 98

*/
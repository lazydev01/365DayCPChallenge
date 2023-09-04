#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int cutRodSpaceOptimization(vector<int> &price, int n)
{
	vector<int> prev(n+1, 0);
	vector<int> curr(n+1, 0);
    for(int i=0; i<=n; i++){
        prev[i] = i*price[0];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=n; j++){
            int notCut = prev[j];
            int cut = 0;
            if((i+1)<=j){
                cut = curr[j-(i+1)];
            }
            curr[j] = price[i] + max(cut, notCut);
        }
        prev = curr;
    }
    return curr[n];
}

int cutRodMoreSpaceOptimization(vector<int> &price, int n){
    vector<int> curr(n+1, 0);
    for(int i=0; i<=n; i++){
        curr[i] = i*price[0];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=n; j++){
            int notCut = curr[j];
            int cut = 0;
            if((i+1)<=j){
                cut = price[i] + curr[j-(i+1)];
            }
            curr[j] = max(cut, notCut);
        }
    }
    return curr[n];
}

int fetchLCS(int i1, int i2, string &s, string &t){
    if(i1<0 || i2<0){
        return 0;
    }
    if(s[i1]==t[i2]){
        return 1 + fetchLCS(i1-1, i2-1, s, t);
    }
    return 0 + max(fetchLCS(i1-1, i2, s, t), fetchLCS(i1, i2-1, s, t));
}

int lcs(string s, string t)
{
	return fetchLCS(s.size()-1, t.size()-1, s, t);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
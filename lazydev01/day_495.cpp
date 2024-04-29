#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int diff(char c){
    return c-'0';
}

void combinationLock(){
    int n;
    cin >> n;
    string original, changed;
    cin >> original >> changed;
    int ans = 0;
    int direct, indirect;
    for(int i=0; i<n; i++){
        if(diff(original[i])<=diff(changed[i])){
            direct = diff(changed[i])-diff(original[i]);
            indirect = (9-diff((changed[i]))) + (diff(original[i]))+1;
        }
        else{
            direct = diff(original[i])-diff(changed[i]);
            indirect = diff(changed[i])+(9-diff(original[i]))+1;
        }
        ans+=min(direct, indirect);
        // cout << direct << indirect << endl;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    combinationLock();
    return 0;
}
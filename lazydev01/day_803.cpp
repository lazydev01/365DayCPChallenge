#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void quests(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int prefixSum = 0;
        int maxB = INT_MIN;
        int maxAns = 0;
        for(int i=0; i<min(n, k); i++){
            prefixSum += a[i];
            maxB = max(maxB, b[i]);
            maxAns = max(maxAns, prefixSum + (maxB*(k-i-1)));
        }
        cout << maxAns << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    quests();
    return 0;
}
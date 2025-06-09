#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void caisaAndPylons(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int cumuSum = 0;
    int initialHeight = 0;
    for(int i=1; i<n; i++){
        cumuSum += (arr[i-1] - arr[i]);
        initialHeight = min(initialHeight, cumuSum);
    }
    cout << abs(initialHeight) + arr[0];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    caisaAndPylons();
    return 0;
}
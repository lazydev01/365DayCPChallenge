#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void vanyaAndCubes(){
    int n;
    cin >> n;
    vector<int> arr;
    int sum_ans = 0;
    int i = 0;
    while(sum_ans<=n){
        i++;
        int ans = (i*(i+1))/2;
        sum_ans += ans;
    }
    cout << i-1 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vanyaAndCubes();
    return 0;
}
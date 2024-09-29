#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findMinimumNumberOfCoins(){
    int num;
    cin >> num;
    int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    while(num!=0){
        int index = upper_bound(arr, arr+n, num) - begin(arr);
        int multiplier = num/arr[index-1];
        num-=(arr[index-1]*multiplier);
        ans+=multiplier;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    findMinimumNumberOfCoins();
    return 0;
}
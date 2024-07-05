#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void petrAndBook(){
    int n;
    cin >> n;
    vector<int> arr(7);
    for(int i=0; i<7; i++){
        cin >> arr[i];
    }
    for(int i=1; i<7; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    n = n % arr[6];
    if(n==0){
        n = arr[6];
    }
    int ind = lower_bound(arr.begin(), arr.end(), n) - arr.begin();
    cout << ind + 1 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    petrAndBook();
    return 0;
}
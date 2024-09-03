#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void reconnaissance2(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int minHeight = INT_MAX;
    int index = -1;
    for(int i=0; i<n-1; i++){
        if(abs(arr[i] - arr[i+1])<minHeight){
            minHeight = abs(arr[i] - arr[i+1]);
            index = i;
        }
    }
    if(abs(arr[0] - arr[n-1]) < minHeight){
        index = n;
    }
    if(index==n){
        cout << 1 << " " << n << endl;
    }
    else{
        cout << index+1 << " " << index+2 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    reconnaissance2();
    return 0;
}
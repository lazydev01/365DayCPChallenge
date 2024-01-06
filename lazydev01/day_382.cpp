#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void goodKid(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mini = INT_MAX;
        int index = -1;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(mini>arr[i]){
                mini = arr[i];
                index = i;
            }
        }
        arr[index]++;
        int ans = 1;
        for(auto i : arr){
            ans *= i;
        }
        cout << ans << endl;
    }
}

void codechefRound(){
    int n;
    cin >> n;
    if(n==4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}


void chocolateDistribution(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << (ceil)(n/2.0) << " " << n << endl;
    }
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // goodKid();
    // codechefRound();
    chocolateDistribution();
    return 0;
}
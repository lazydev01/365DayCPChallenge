#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void guessTheMaximum(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool isConsecutive = false;
        int mini = INT_MAX;
        for(int i=0; i<n-1; i++){
            mini = min(mini, max(arr[i], arr[i+1]));
        }
        cout << mini - 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    guessTheMaximum();
    return 0;
}
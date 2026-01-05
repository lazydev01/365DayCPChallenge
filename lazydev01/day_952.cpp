#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void justEatIt(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int totalSum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            totalSum += arr[i];
        }
        bool adelWins = false;
        int currSum = 0;
        int start = 0;
        for(int i = 0; i < n; i++){
            if(currSum <= 0){
                currSum = 0;
                start = i;
            }
            currSum += arr[i];
            if(currSum >= totalSum && (start != 0 || i!=n-1)){
                adelWins = true;
                break;
            }
        }
        if(adelWins){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    justEatIt();
    return 0;
}

/*

10
10 5 -12 7 -10 20 30 -10 50 60

*/
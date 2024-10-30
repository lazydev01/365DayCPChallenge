#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeEqualAgain(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int startSimilar = 1;
        int endSimilar = 1;
        for(int i=1; i<n; i++){
            if(arr[i]==arr[0]){
                startSimilar++;
            }
            else{
                break;
            }
        }
        for(int i=n-2; i>=0; i--){
            if(arr[i]==arr[n-1]){
                endSimilar++;
            }
            else{
                break;
            }
        }
        int similarEls;
        if(arr[0]==arr[n-1]){
            similarEls = min(n, startSimilar + endSimilar);
        }
        else{
            similarEls = max(startSimilar, endSimilar);
        }
        cout << n - similarEls << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeEqualAgain();
    return 0;
}
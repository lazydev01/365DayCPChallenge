#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeItIncreasing(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        bool isPossible = true;
        if(n>1 && arr[n-1]==0){
            isPossible = false;
        }
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=arr[i+1]){
                while(arr[i]!=0 && arr[i]>=arr[i+1]){
                    arr[i]/=2;
                    ans++;
                }
            }
            if(arr[i]==0 && i!=0){
                isPossible = false;
                break;
            }  
        }
        if(isPossible){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeItIncreasing();
    return 0;
}
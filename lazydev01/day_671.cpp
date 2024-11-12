#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void boatsCompetition(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(int i=1; i<=100; i++){
            int j=0, k=n-1, cnt = 0;
            while(j<k){
                if(arr[j]+arr[k]==i){
                    j++;
                    k--;
                    cnt++;
                }
                else if(arr[j]+arr[k]<i){
                    j++;
                }
                else{
                    k--;
                }
            }
            ans = max(ans, cnt);    
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    boatsCompetition();
    return 0;
}
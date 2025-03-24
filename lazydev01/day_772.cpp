#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void unitArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int countOnes = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == 1){
                countOnes++;
            }
        }
        int ans = 0;
        if(countOnes <= (n+1)/2){
            ans += ((n+1)/2)-countOnes;
            countOnes = ((n+1)/2);
        }
        if((n-countOnes) % 2){
            ans++;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    unitArray();
    return 0;
}
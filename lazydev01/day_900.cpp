#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void binaryDeque(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        int i = 0;
        int j = 0;
        int currSum = 0;
        while(j <= arr.size()){
            if(currSum == s){
                ans = max(ans, j - i);
                currSum += arr[j];
                j++;
            }
            else if(currSum > s){
                currSum -= arr[i];
                i++;
            }
            else {
                currSum += arr[j];
                j++;
            }
        }
        if(ans == 0){
            cout << -1 << endl;
            continue;
        }
        cout << arr.size() - ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    binaryDeque();
    return 0;
}
/*

    Question -> https://www.codechef.com/problems/MTYFRI

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> motu;
        vector<int> tomu;
        for(int i=0; i<n; i++){
            if(i%2==0){
                motu.push_back(arr[i]);
            }
            else{
                tomu.push_back(arr[i]);
            }
        }
        sort(motu.begin(), motu.end(), greater<int>());
        sort(tomu.begin(), tomu.end());
        for(int i=0; i<min(n/2,k); i++){
            if(motu[i]>tomu[i]){
                int temp = motu[i];
                motu[i] = tomu[i];
                tomu[i] = temp;
            }
        }
        int sum_motu = accumulate(motu.begin(), motu.end(), 0);
        int sum_tomu = accumulate(tomu.begin(), tomu.end(), 0);
        if(sum_tomu > sum_motu){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
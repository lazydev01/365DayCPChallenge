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

        int n;
        cin >> n;
        vector<int>left(n);
        vector<int>right(n);
        for(int i=0; i<n; i++){
            cin >> left[i];
        }
        for(int i=0; i<n; i++){
            cin >> right[i];
        }
        vector<int> left_misplaced;
        vector<int> right_misplaced;
        for(int i=0; i<n; i++){
            if(left[i]>n){
                left_misplaced.push_back(i);
            }
            if(right[i]<=n){
                right_misplaced.push_back(n+i);
            }
        }
        int ans = 0;
        for(int i=0; i<left_misplaced.size(); i++){
            ans += (right_misplaced[i] - left_misplaced[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> ans(n, 1);
        bool neg = false;
        if(arr[n-1]<0){
            neg = true;
        }
        for(int i=n-2; i>=0; i--){
            ans[i] = ans[i+1];
            if(neg && arr[i]<0){
                ans[i]=1;
            }
            if(!neg && arr[i]>0){
                ans[i]=1;
            }
            if(neg && arr[i]>0){
                ans[i]++;
                neg = false;
            }
            if(!neg && arr[i]<0){
                ans[i]++;
                neg = true;
            }
        }
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
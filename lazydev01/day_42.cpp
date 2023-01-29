/*

    Question -> https://www.codechef.com/problems/KMAX2

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
        int count = 0;
        int maximum = INT_MIN;
        vector<int> index;
        for(int i=0; i<n; i++){
            if(maximum < arr[i]){
                maximum = arr[i];
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]==maximum){
                index.push_back(i+1);
            }
        }
    for(auto i:index)
    {
        if(i>=k)
            count+=n-i+1;
    }
        cout << count << endl;
    }
    return 0;
}
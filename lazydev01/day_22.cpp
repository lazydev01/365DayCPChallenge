/*

https://www.codechef.com/problems/ARRAYRET

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

        int n;
        cin >> n;
        vector<int> b(n);
        int sum_b = 0;
        for(int i=0; i<n; i++){
            cin >> b[i];
            sum_b+=b[i];
        }
        
        int sum_a = sum_b/(n+1);
        vector<int> a;
        for(int i=0; i<n; i++){
            a.push_back(b[i]-sum_a);
        }
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
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

        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        map<char, int> ma;
        for(int i=0; i<n; i++){
            ma[a[i]]++;
        }
        for(int i=0; i<m; i++){
            ma[b[i]]++;
        }
        int count = 0;
        bool flag = false;
        for(auto i: ma){
            if(i.second%2!=0){
                count++;
            }
            if(count > 1){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }
    return 0;
}
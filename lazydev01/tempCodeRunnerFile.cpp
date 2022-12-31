/*

Question -> https://www.codechef.com/problems/DOMINANT2

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

bool cmp(pair<string, int>& a,
        pair<string, int>& b)
{
    return a.second < b.second;
}

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
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        if(m.size()==1){
            cout << "YES" << endl;
        }
        else{
            sort(m.begin(), m.end(), cmp);
            auto it1 = m.end();
            it1--;
            auto it2 = m.end();
            it2--;
            it2--;
            if(it1->second==it2->second){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
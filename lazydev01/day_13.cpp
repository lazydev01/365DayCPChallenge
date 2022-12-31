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
            vector<int> v;
            for(auto it: m){
                v.push_back(it.second);
            }
            sort(v.begin(), v.end());
            int last = v[v.size()-1];
            int second_last = v[v.size()-2];
            if(last==second_last){
                NO;
            }
            else{
                YES;
            }
        }
    }
    return 0;
}
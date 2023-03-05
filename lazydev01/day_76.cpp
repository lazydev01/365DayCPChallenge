/*

  Question -> https://www.codechef.com/problems/NAME1

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
        string a, b;
        cin >> a >> b;
        int n;
        cin >> n;
        vector<string> v1(n);
        for(int i=0; i<n; i++){
          cin >> v1[i];
        }
        map<char, int> parents;
        map<char, int> children;
        for(int i=0; i<a.size(); i++){
          parents[a[i]]++;
        }
        for(int i=0; i<b.size(); i++){
          parents[b[i]]++;
        }
        for(int i=0; i<n; i++){
          for(int j=0; j<v1[i].size(); j++){
            children[v1[i][j]]++;
          }
        }
        bool flag = false;
        for(auto i : children){
          if(i.second > parents[i.first]){
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
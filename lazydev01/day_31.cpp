/*

Question -> https://www.codechef.com/problems/TEAMOF2

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
        int index = 1;
        map<int, vector<int>> m;
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            for(int j=0; j<k; j++){
                int k_i;
                cin >> k_i;
                m[index].push_back(k_i);
            }
            index++;
        }
        bool flag = false;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<int> s;
                for(int ii=0; ii<m[i+1].size(); ii++){
                    s.insert(m[i+1][ii]);
                    // cout << m[i+1][ii] << endl;
                }
                for(int jj=0; jj<m[j+1].size(); jj++){
                    s.insert(m[j+1][jj]);
                }
                if(s.size()==5){
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
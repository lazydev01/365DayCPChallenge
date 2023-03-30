/*

    Question -> https://www.codechef.com/problems/BOUQUET

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

        int mg, my, mr;
        cin >> mg >> my >> mr;
        int og, oy, o;
        cin >> og >> oy >> o;
        int pg, py, pr;
        cin >> pg >> py >> pr;
        int m_total = mg + my + mr;
        int o_total = og + oy + o;
        int p_total = pg + py + pr;
        int g_total = mg+og+pg;
        int y_total = my+oy+pg;
        int r_total = mr + o + pr;
        vector<int> arr;
        arr.push_back(m_total);
        arr.push_back(o_total);
        arr.push_back(p_total);
        arr.push_back(g_total);
        arr.push_back(y_total);
        arr.push_back(r_total);
        int max = *max_element(arr.begin(), arr.end());
        if(max%2==0){
            cout << max-1 << endl;
        }
        else{
            cout << max << endl;
        }

    }
    return 0;
}
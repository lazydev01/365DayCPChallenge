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

        string s1;
        string s2;
        double l;
        double ans1;
        double ans2;
        cin >> s1 >> s2 >> l;
        string h1 = s1.substr(0, 2);
        string h2 = s2.substr(0, 2);
        string m1 = s1.substr(3, 2);
        string m2 = s2.substr(3, 2);
        double hr1 = stoi(h1);
        double hr2 = stoi(h2);
        double mn1 = stoi(m1);
        double mn2 = stoi(m2);
        double hr_diff = (hr1 - hr2)*60;
        double mn_diff = (mn1 - mn2);
        double total_diff = hr_diff + mn_diff;
        ans1 = total_diff + l;
        if(2*l<=total_diff){
            ans2 = total_diff;
        }
        else{
            ans2 = total_diff + ((2*l)-total_diff)/2.0;
        }
        cout << fixed << setprecision(1) <<  ans1 << " " << ans2 << endl;

    }
    return 0;
}
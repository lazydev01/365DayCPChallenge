/*

Question -> https://www.codechef.com/problems/PREDICT

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

        double p_a;
        cin >> p_a;
        if(p_a<=0.500000){
            p_a = 1-p_a;
        }
        double p_b = 1 - p_a;
        double original_money = 10000;
        double invest_a = (p_a*original_money);
        double invest_b = (p_b*original_money);
        original_money-=invest_b;
        // cout << p_a << " " << p_b << " " << invest_a << " " << invest_b << endl;
        double profit_a = 2*(1-p_a)*invest_a;
        // cout << original_money << " " << profit_a << endl;
        original_money+=profit_a;
        cout << fixed << setprecision(6) << original_money << endl; 

    }
    return 0;
}

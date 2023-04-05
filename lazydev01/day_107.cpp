/*

    Question -> https://www.codechef.com/problems/ANUDTC

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
        string first;
        string second;
        string third;
        float deg = 360.0/n;
        if(deg==(int)deg){
            first = "y";
        }
        else{
            first = "n";
        }
        if(n<=360){
            second = "y";
        }
        else{
            second = "n";
        }
        if(n<=26){
            third = "y";
        }
        else{
            third = "n";
        }
        cout << first << " " << second << " " << third << endl;

    }
    return 0;
}
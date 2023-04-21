/*

    Question -> https://www.codechef.com/problems/STRAME

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
        string s;
        cin >> s;
        int count_zero = 0;
        int count_one = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                count_zero++;
            }
            else{
                count_one++;
            }
        }
        if(min(count_zero, count_one)%2==0){
            cout << "Ramos" << endl;
        }
        else{
            cout << "Zlatan" << endl;
        }

    }
    return 0;
}
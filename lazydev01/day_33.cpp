/*

Question -> https://www.codechef.com/problems/BWCELL

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

        string s;
        cin >> s;
        int left = s.find('W');
        int right = s.size()-left-1;
        if(left==right){
            cout << "Chef" << endl;
        }
        else{
            cout << "Aleksa" << endl; 
        }
        

    }
    return 0;
}
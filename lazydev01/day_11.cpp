/*

Question -> https://www.codechef.com/problems/SEGM01

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
        int count = 0;
        bool flag = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                flag = true;
            }
            else{
                if(flag){
                    count++;
                }
                flag = false;
            }
        }
        if(s[s.size()-1]=='1'){
            count++;
        }
        if(count!=1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
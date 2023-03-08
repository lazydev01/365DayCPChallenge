/*

    Question -> https://www.codechef.com/problems/PROBSET

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

        int n, m;
        cin >> n >> m;
        bool invalid = false;
        bool weak = false;
        for(int i=0; i<n; i++){
            string s1, s2;
            cin >> s1 >> s2;
            if(s1=="correct"){
                for(int j=0; j<m; j++){
                    if(s2[j]=='0'){
                        invalid = true;
                        break;
                    }
                }
            }
            else{
                string ones = "1";
                for(int i=1; i<m; i++){
                    ones+='1';
                }
                if(s2==ones){
                    weak = true;
                }
            }
        }
        if(invalid){
            cout << "INVALID" << endl;
        }
        else if(weak){
            cout << "WEAK" << endl;
        }
        else{
            cout << "FINE" << endl;
        }
        

    }
    return 0;
}
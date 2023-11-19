#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fairDistribution(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_one = 0;        
        int count_zero = 0;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(s[i]=='0')count_zero++;
            else count_one++;
        }
        if(abs(count_one - count_zero) > 1){
            cout << "NO" << endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(s[i]=='1'){
                    count_one--;
                }
                else{
                    count_zero--;
                }
                if(abs(count_one - count_zero) > 1){
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                cout << "YES" << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fairDistribution();
    return 0;
}
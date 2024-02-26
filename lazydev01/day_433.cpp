#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void vladAndTheBestOfFive(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a_count = 0;
        int b_count = 0;
        for(auto i : s){
            if(i=='A'){
                a_count++;
            }
            else{
                b_count++;
            }
        }
        if(a_count>b_count){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vladAndTheBestOfFive();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void icpcBalloons(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<int, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        cout << n + mp.size() << endl;
    }
}

void lcmMania(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=2 || (((n & (n-1)) == 0))){
            cout << -1 << endl;
        }
        else if(n%2!=0){
            cout << 1 << " " << 1 << " " << n/2 << endl;
        }
        else if(n%3==0){
            cout << n/3 << " " << n/3 << " " << n/3 << endl;
        }
        else{
            int val = 2;
            while(!(val & n)){
                val*=2;
            }
            cout << val << " " << val << " " << (n-val)/2 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // icpcBalloons();
    lcmMania();
    return 0;
}
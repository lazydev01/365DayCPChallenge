#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeItDivisibleBy25(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        if(n%25==0){
            cout << ans << endl;
            continue;
        }
        string num = to_string(n);
        int endsWith5 = 0;
        int endsWith0 = 0;
        reverse(num.begin(), num.end());
        int index5 = num.find('5');
        if(index5 != string::npos){
            endsWith5 += index5;
            int index2 = num.find('2', index5+1);
            int index7 = num.find('7', index5+1);
            if(index2 == string::npos){
                index2 = INT_MAX;
            }
            if(index7 == string::npos){
                index7 = INT_MAX;
            }
            endsWith5+=(min(index2, index7) - (index5+1));
        }
        else{
            endsWith5 = INT_MAX;
        }
        int index0 = num.find('0');
        if(index0 != string::npos){
            endsWith0 += (index0);
            int index00 = num.find('0', index0+1);
            int index50 = num.find('5', index0+1);
            if(index00 == string::npos){
                index00 = INT_MAX;
            }
            if(index50 == string::npos){
                index50 = INT_MAX;
            }
            endsWith0+=(min(index00, index50) - (index0 + 1));
        }
        else{
            endsWith0 = INT_MAX;
        }
        cout << min(endsWith0, endsWith5) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeItDivisibleBy25();
    return 0;
}
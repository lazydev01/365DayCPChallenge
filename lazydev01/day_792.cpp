#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sumOfDigits(){
    string n;
    cin >> n;
    int cnt = 0;
    while(n.size()!=1){
        int sum = 0;
        for(char c : n){
            sum += (c - '0');
        }
        n = to_string(sum);
        cnt++;
    }
    cout << cnt << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sumOfDigits();
    return 0;
}
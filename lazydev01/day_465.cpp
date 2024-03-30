#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void theIdesOfMarch(){
    int n;
    cin >> n;
    if(n==15){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void extremeBasketball(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a-b >=10){
            cout << 0 << endl;
        }
        else{
            int diff = a-b;
            int toScore = 10-diff;
            cout << (ceil)(toScore/3.0) << endl;
        }
    }
}

void superincreasing(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        int log_x = log2(x);
        if(log_x>=k-1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // theIdesOfMarch();
    // extremeBasketball();
    superincreasing();
    return 0;
}
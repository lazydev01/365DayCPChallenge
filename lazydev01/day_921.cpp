#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

void simpleRepetition(){
    int t;
    cin >> t;
    while(t--){
        int x, k;
        cin >> x >> k;
        if(x > 1 && k > 1){
            cout << "NO" << endl;
        }
        else if(k == 1){
            cout << (isPrime(x) ? "YES" : "NO") << endl;
        }
        else{
            string s = to_string(x);
            string finalS = "";
            for(int i = 0; i < k; i++){
                finalS += s;
            }
            cout << (isPrime(stoi(finalS)) ? "YES" : "NO") << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    simpleRepetition();
    return 0;
}
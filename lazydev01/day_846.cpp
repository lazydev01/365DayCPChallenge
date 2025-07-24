#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void hexadecimalsTheorem(){
    int n;
    cin >> n;
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    int num = fib[fib.size() - 1] + fib[fib.size() - 2];
    while(num <= 1e9){
        fib.push_back(num);
        num = fib[fib.size() - 1] + fib[fib.size() - 2];
    }
    int a = *lower_bound(fib.begin(), fib.end(), n);
    n-=a;
    int b = *lower_bound(fib.begin(), fib.end(), n);
    n-=b;
    int c = *lower_bound(fib.begin(), fib.end(), n);
    cout << a << " " << b << " " << c << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    hexadecimalsTheorem();
    return 0;
}
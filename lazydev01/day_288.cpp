#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

// #define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

    Question -> https://codeforces.com/contest/1878/problem/B

*/

void problemC(){
    int t;
    cin >> t;
    while(t--){
        long long n, k, x;
        cin >> n >> k >> x;
        long long left = n-k;
        long long sum_n = (n*(n+1))/2;
        long long sum_left = (left * (left + 1))/2;
        long long sum_k = (k*(k+1))/2;
        long long max_sum = sum_n - sum_left;
        if(x>max_sum || x<sum_k){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    problemC();
    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    //     for(int i=0; i<n; i++){
    //         cout << (2*i)+1 << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;
}
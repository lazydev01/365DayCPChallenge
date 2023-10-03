#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

    Question -> https://codeforces.com/problemset/problem/1807/A

*/


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b==c){
            cout << "+" << endl;
        }
        else{
            cout << "-" << endl;
        }
    }
    return 0;
}

void howMuchDoesDaytonaCost(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        bool flag = false;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==k){
                flag = true;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
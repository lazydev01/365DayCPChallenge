#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Question -> https://www.codechef.com/problems/FEVER

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x>98){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
} 
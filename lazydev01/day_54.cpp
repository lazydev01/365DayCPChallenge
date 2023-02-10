<<<<<<< HEAD
/*

    Question -> https://www.codechef.com/problems/TIMELY

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int x;
        cin >> x;
        if(x>=30){
            YES;
        }
        else{
            NO;
        }

    }
    return 0;
}
=======
#include <iostream>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int x;
        cin >> x;
        if(x>=67 && x<=45000){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
>>>>>>> abd85cdb79e86bdd475dde17da686c9d9428a523

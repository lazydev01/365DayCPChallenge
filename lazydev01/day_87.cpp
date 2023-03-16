/*

    Question -> https://www.codechef.com/problems/GUESS

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

    // cout << "HELLO" << endl;
    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int even_count = (n+1)/2;
        // cout << even_count << endl;
        int odd_count = n/2;

        // cout << even_count << " " << odd_count << endl;

        int m_count_1 = (m+1)/2;
        int m_count_2 = (m)/2;

        int alice = (m_count_1*odd_count) + (m_count_2*even_count);
        int bob = (m_count_2*odd_count) + (m_count_1*even_count);
        // cout << alice << endl;
        // cout << bob << endl;
        
        bob+=alice;
        if(alice!=0 && bob!=0){
            int gcd_alice_bob = __gcd(alice, bob);
            alice/=gcd_alice_bob;
            bob/=gcd_alice_bob;
        }

        cout << alice << "/" << bob << endl;

    }
    return 0;
}
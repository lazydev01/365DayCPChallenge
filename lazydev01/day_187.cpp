/*

    Question -> https://www.codechef.com/problems/CS2023_STK

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

        int n;
        cin >> n;
        vector<int> v_a(n);
        vector<int> v_b(n);
        for(int i=0; i<n; i++){
            cin >> v_a[i];
        }
        for(int i=0; i<n; i++){
            cin >> v_b[i];
        }
        int max_a = 0;
        int max_b = 0;
        int count_a = 0;
        int count_b = 0;
        for(int i=0; i<n; i++){
            if(v_a[i]==0){
                count_a = 0;
            }
            else{
                count_a++;
            }
            max_a = max(max_a, count_a);
        }
        for(int i=0; i<n; i++){
            if(v_b[i]==0){
                count_b = 0;
            }
            else{
                count_b++;
            }
            max_b = max(max_b, count_b);
        }
        if(max_a == max_b){
            cout << "Draw" << endl;
        }
        else if(max_a>max_b){
            cout << "Om" << endl;
        }
        else{
            cout << "Addy" << endl;
        }

    }
    return 0;
}
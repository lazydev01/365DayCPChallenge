/*

Question -> https://www.codechef.com/problems/ADJHATE

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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int odd = 0;
        int even = 0;
        vector<int> odd_arr;
        vector<int> even_arr;
        for(auto i : arr){
            if(i%2==0){
                even++;
                even_arr.push_back(i);
            }
            else {
                odd++;
                odd_arr.push_back(i);
            }
        }
        if(!odd || !even){
            cout << -1 << endl;
            continue;
        }
        for(int i=0; i<odd_arr.size(); i++){
            cout << odd_arr[i] << " ";
        }
        for(int i=0; i<even_arr.size(); i++){
            cout << even_arr[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
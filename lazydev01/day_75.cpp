/*

    Question -> https://www.codechef.com/problems/PCJ18B

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
        vector<int> arr(1000);
        arr[0]=1;
        arr[1]=4;
        for(int i=2; i<1000; i++){
            arr[i]=arr[i-2]+((i+1)*(i+1));
        }
        int n;
        cin >> n;
        cout << arr[n-1] << endl;
    }
    return 0;
}
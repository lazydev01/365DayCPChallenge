#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int matrixMultiplication(vector<int> &arr, int N)
{
    
}

/*

    Question -> https://www.codechef.com/problems/APPENDOR

*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, y;
        cin >> n >> y;
        vector<int> arr(n);
        int or_ans = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            or_ans |= arr[i];
        }
        int xor_ans = or_ans ^ y;
        if(y!=(xor_ans | or_ans)){
            cout << -1 << endl;
            continue;
        }
        cout << (or_ans ^ y) << endl;
    }
    return 0;
}
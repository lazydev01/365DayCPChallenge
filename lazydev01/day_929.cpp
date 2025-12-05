#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void luntikAndSubsequences(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int zeros = 0;
        int ones = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 1){
                ones++;
            }
            else if(arr[i] == 0){
                zeros++;
            }
        }
        zeros = pow(2, zeros);
        cout << (ones * zeros) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    luntikAndSubsequences();
    return 0;
}

/*

0 -> 0 _
0 0 -> 0 0 00 _
0 0 0 -> 0 0 0 00 00 000 _
0 0 0 0 -> 0 0 0 0 00 00 00 00 00 00 000 000

1 0 0 0 -> 0 0 0 00 00 00 000 _ 







*/
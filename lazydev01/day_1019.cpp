#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void dejaVu(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> arr(n), queries(q);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < q; i++){
            cin >> queries[i];
        }
        int prev = 31;
        for(int i = 0; i < q; i++){
            if(queries[i] >= prev) continue;
            int val = pow(2, queries[i]);
            for(int j = 0; j < n; j++){
                if(arr[j] % val == 0){
                    arr[j] += (val / 2);
                }
            }
            prev = queries[i];
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    dejaVu();
    return 0;
}
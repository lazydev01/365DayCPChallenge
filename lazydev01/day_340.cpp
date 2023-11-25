#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void worthOfAVideo(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 24000 * n << endl;
    }

}

void bestOfNSets(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << 2 * max(x, y) - 1 << endl;
    }
}

void minimumXOR(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int acc_xor = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            acc_xor ^= arr[i];
        }
        int min_xor = acc_xor;
        for(int i=0; i<n; i++){
            int temp = acc_xor ^ arr[i];
            min_xor = min(min_xor, temp);
        }
        cout << min_xor << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // worthOfAVideo();
    // bestOfNSets();
    minimumXOR();
    return 0;
}
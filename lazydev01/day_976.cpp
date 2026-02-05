#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeAlmostEqualWithMod(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool found = false;
        int mul = 2;
        while(true){
            set<int> s;
            for(auto i : arr){
                s.insert(i%mul);
            }
            if(s.size() == 2){
                break;
            }
            mul = mul << 1;
        }
        cout << mul << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeAlmostEqualWithMod();
    return 0;
}
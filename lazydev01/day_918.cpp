#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void addAndDivide(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ops = INT_MAX;
        for(int i = 0; i < 32; i++){
            int currOps = i;
            int new_b = b + i;
            if(new_b == 1) continue;
            int copy_a = a;
            while(copy_a > 0){
                currOps++;
                copy_a = copy_a / new_b;
            }
            ops = min(ops, currOps);
        }
        cout << ops << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    addAndDivide();
    return 0;
}
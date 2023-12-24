#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimizeMaximumSubarraySum(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int ans = x - (2*y);
        if(ans<=1){
            if(x>y+1){
                cout << 2 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else{
            cout << ans << endl;
        }
    }
}

void permutationConstruction(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if(n%2==1 && x==((n+1)/2)){
            cout << -1 << endl;
        }
        else{
            vector<int> ans(n);
            ans[0] = x;
            ans[n-1] = (n+1) - x;

            set<int> s;
            for(int i=1; i<=n; i++){
                if(i==x || i==(n+1-x)){
                    continue;
                }
                    s.insert(i);
            }

            if(n%2){
                ans[n/2] = (n+1)/2;
                s.erase((n+1)/2);
            }

            for(int i=1; i<(n/2); i++){
                int random = *s.begin();
                int last_el = n+1-random;
                ans[i] = random;
                ans[n-i-1] = last_el;
                s.erase(random);
                s.erase(last_el);
            }

            for(auto i : ans){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // minimizeMaximumSubarraySum();
    permutationConstruction();
    return 0;
}

/*

4
3 2
3 1
4 3
4 4

3 2
2 3 1
-1

3 1
1 2 3

3 4 1 2

4 3 2 1

6 2

2 3 6 1 4 5  

*/
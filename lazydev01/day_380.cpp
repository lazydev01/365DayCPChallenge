#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void arrayColoring(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if(sum%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

void greedyLISAlgorithm(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> ans(n);
        if(x==0){
            for(int i=1; i<=n; i++){
                ans[i-1] = i;
            }
            for(auto i : ans){
                cout << i << " ";
            }
            cout << endl;
        }
        else if(x>n-2){
            cout << -1 << endl;
        }
        else{
            for(int i=1; i<=(n-(x+2)); i++){
                ans[i-1] = i;
            }
            ans[n-(x+2)] = n;
            for(int i=(n-(x+2))+1; i<=n-1; i++){
                ans[i] = i;
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

    // arrayColoring();
    greedyLISAlgorithm();
    return 0;
}

/*

5 0
1 2 3 4 5

5 1
1 2 5 3 4 

5 2
1 5 2 3 4

5 3
5 1 2 3 4

6 0
1 2 3 4 5 6

6 1
1 2 3 6 4 5

6 2
1 2 6 3 4 5

6 3
1 6 2 3 4 5

6 4
6 1 2 3 4 5





*/
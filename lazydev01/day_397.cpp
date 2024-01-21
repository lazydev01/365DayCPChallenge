#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void weaponChoice(){
    int t;
    cin >> t;
    while(t--){
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;
        int type1hits, type2hits;
        type1hits = (ceil)(h/(x*1.0));
        if((h - (k*y1) > 0)){
            type2hits = k;
            h-=(k*y1);
            type2hits += (ceil)(h/(y2*1.0));
        }
        else{
            type2hits = (ceil)(h/(y1*1.0));
        }
        cout << min(type2hits, type1hits) << endl;
    }
}

void notPrimePermutation(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(n<3){
            cout << -1 << endl;
        }
        else if(n%2==0){
            for(int i=0; i<n; i++){
                int ans = (n+1) - arr[i];
                if(ans%2){
                    ans++;
                }
                else{
                    ans--;
                }
                cout << ans << " ";
            }
            cout << endl;
        }
        else{
            for(int i=0; i<n; i++){
                cout << (n+1)-arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // weaponChoice();
    notPrimePermutation();
    return 0;
}

/*

1 2 3 4
4 3 2 1
3 4 1 2

1 2 3 4 5 6
6 5 4 3 2 1
5 6 3 4 1 2



*/
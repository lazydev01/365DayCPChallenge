#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void friendsAndTheRestaurant(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> x(n), y(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        vector<int> diff;
        for(int i = 0; i < n; i++){
            diff.push_back(y[i] - x[i]);
        }
        sort(diff.begin(), diff.end());
        int low = 0;
        int high = n - 1;
        int groups = 0;
        while(low < high){
            if(diff[low] + diff[high] >= 0){
                groups++;
                low++;
                high--;
            }
            else{
                low++;
            }
        }
        cout << groups << endl;     
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    friendsAndTheRestaurant();
    return 0;
}

/*

6
8 3 9 2 4 5
5 3 1 4 5 10

-3 -8 
0 1 2 5



*/
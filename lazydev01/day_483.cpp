#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void balancedRound(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int max_count = 1;
        int count = 1;
        for(int i=0; i<n-1; i++){
            if((arr[i+1]-arr[i])<=k){
                count++;
            }
            else{
                count = 1;
            }
            max_count = max(max_count, count);
        }
        cout << n-max_count << endl;
    }
}

void arrangingCats(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string start, final;
        cin >> start >> final;
        int misplaced_one = 0;
        int misplaced_zero = 0;
        for(int i=0; i<n; i++){
            if(start[i]!=final[i]){
                if(start[i]=='1'){
                    misplaced_one++;
                }
                else{
                    misplaced_zero++;
                }
            }
        }
        cout << (max(misplaced_one, misplaced_zero)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // balancedRound();
    arrangingCats();
    return 0;
}
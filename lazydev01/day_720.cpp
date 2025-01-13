#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yetAnotherBookshelf(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int zero_count = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==0){
                zero_count++;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                break;
            }
            zero_count--;
        }
        for(int i=n-1; i>=0; i--){
            if(arr[i]==1){
                break;
            }
            zero_count--;
        }
        zero_count = max(zero_count, 0ll);
        cout << zero_count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    yetAnotherBookshelf();
    return 0;
}
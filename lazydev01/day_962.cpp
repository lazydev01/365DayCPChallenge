#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fashionableArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int firstEven = -1;
        int firstOdd = -1;
        int lastEven = -1;
        int lastOdd = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                if(firstEven == -1) firstEven = i;
                lastEven = i;
            }
            else{
                if(firstOdd == -1) firstOdd = i;
                lastOdd = i;
            }
        }
        cout << min((firstEven + (n-1-lastEven)), firstOdd + (n-1-lastOdd)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fashionableArray();
    return 0;
}
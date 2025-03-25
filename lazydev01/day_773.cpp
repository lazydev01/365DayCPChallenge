#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void threeIndices(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<pair<int, int>> suffixMinis(n);
        int suffixMin = INT_MAX;
        int suffixIndex = -1;
        for(int i=n-1; i>=1; i--){
            if(suffixMin > arr[i]){
                suffixMin = arr[i];
                suffixIndex = i+1;
            }
            suffixMinis[i-1] = make_pair(suffixMin, suffixIndex);
        }
        int prefixMax =  arr[0];
        int prefixIndex = 1;
        bool found = false;
        for(int i=1; i<n-1; i++){
            if(prefixMax < arr[i] && arr[i] > suffixMinis[i].first){
                found = true;
                cout << "YES" << endl;
                cout << prefixIndex << " " << i+1 << " " << suffixMinis[i].second << endl;
                break;
            }
            if(prefixMax > arr[i]){
                prefixMax = arr[i];
                prefixIndex = i+1;
            }
        }
        if(!found){
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    threeIndices();
    return 0;
}
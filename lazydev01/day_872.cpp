#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximumMedian(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int curr = arr[n/2];
    int sameElements = 1;
    for(int i = (n/2) + 1; i < n; i++){
        if(k<=0) break;
        int diff = arr[i] - curr;
        // cout << curr << " " << k << " " << diff << endl;
        if(k >= diff * sameElements){
            curr = arr[i];
            k -= (diff * sameElements);
            sameElements++;
        }
        else{
            curr = curr + (k / sameElements);
            k = 0;
        }
    }
    curr += (k / sameElements);
    cout << curr << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximumMedian();
    return 0;
}
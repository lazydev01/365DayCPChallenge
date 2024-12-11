#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mrPerfectlyFine(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string, int> mp;
        mp["00"] = INT_MAX;
        mp["01"] = INT_MAX;
        mp["10"] = INT_MAX;
        mp["11"] = INT_MAX;
        for(int i=0; i<n; i++){
            int m;
            string s;
            cin >> m >> s;
            mp[s] = min(mp[s], m);
        }
        if(mp["11"]==INT_MAX && (mp["01"]==INT_MAX || mp["10"]==INT_MAX)){
            cout << -1 << endl;
        }
        else{
            cout << min(mp["11"], mp["01"] + mp["10"]) << endl;
        }
    }
}

void kthElementOfTwoSortedArrays(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int k;
    cin >> k;
    if(n>m){
        swap(n, m);
        swap(a, b);
    }
    int low = max(0ll, k-n);
    int high = min(k, n);
    int ans;
    while(low<=high){
        int mid = (low + high)/2;
        int mid2 = k - mid;
        int l1 = INT_MIN;
        int l2 = INT_MIN;
        int r1 = INT_MAX;
        int r2 = INT_MAX;
        if(mid>0){
            l1 = a[mid-1];
        }
        if(mid2>0){
            l2 = b[mid2-1];
        }
        if(mid<n){
            r1 = a[mid];
        }
        if(mid2<m){
            r2 = b[mid2];
        }
        if(l1<=r2 && l2<=r1){
            ans = max(l1, l2);
            break;
        }
        else if(l1>r2){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // mrPerfectlyFine();
    kthElementOfTwoSortedArrays();
    return 0;
}
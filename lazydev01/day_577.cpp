#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twoSumVariation1(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j] == k){
            cout << "YES" << endl;
            return;
        }
        if(arr[i] + arr[j] > k){
            j--;
        }
        else{
            i++;
        }
    }
    cout << "NO" << endl;
}

void twoSumVariation2(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        if(mp.find(k-arr[i])!=mp.end()){
            cout << mp[k-arr[i]] << " "  << i << endl;
            return;
        }
        mp[arr[i]] = i;
    }
    cout << -1 << " "  << -1 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // twoSumVariation1();
    twoSumVariation2();
    return 0;
}
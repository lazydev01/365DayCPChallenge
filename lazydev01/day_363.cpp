#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void worms(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;
    vector<int> queries(q);
    for(int i=0; i<q; i++){
        cin >> queries[i];
    }
    for(int i=1; i<n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    for(auto i : queries){
        cout << lower_bound(arr.begin(), arr.end(), i) - arr.begin() + 1 << endl;
    }
}

int linearSearch(vector<int> &arr, int ind, int n){
    for(int i=ind; i<arr.size(); i++){
        if(arr[i]>=n){
            return i;
        }
    }
    return -1;
}

void cursedIndices(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int count = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            if(i<(n-1) && sum>=arr[i+1]){
                int ind = linearSearch(arr, i+1, sum+1);
                if(ind==-1){
                    count = n-i-1;
                    break;
                }
                swap(arr[i+1], arr[ind]);
            }
        }
        cout << count << endl;
        for(auto i : arr){
            cout << i << " "; 
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // worms();
    cursedIndices();
    return 0;
}
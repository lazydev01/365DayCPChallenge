#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kthPermutation(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int fact = 1;
    for(int i=1; i<=n; i++){
        arr[i-1] = i;
        fact = fact * i;
    }
    fact/=n;
    k--; // 0-based Indexing
    string ans = "";
    while(true){
        ans = ans + to_string(arr[k/fact]);
        arr.erase(arr.begin() + k/fact);
        if(arr.size()==0){
            break;
        }
        k = k%fact;
        fact = fact / arr.size();
    }
    cout << ans << endl;
}

void countInversions(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
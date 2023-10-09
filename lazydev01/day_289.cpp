#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fence(){
    int n, k;
    cin >> n >> k;
    int sum_k = 0;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i<k){
            sum_k += arr[i];
        }
    }
    vector<int> sum_arr;
    sum_arr.push_back(sum_k);
    int i = 0;
    int j = k;
    while(j<n){
        sum_k-=arr[i];
        sum_k+=arr[j];
        j++;
        i++;
        sum_arr.push_back(sum_k);
    }
    int ans = INT_MAX;
    int ind = -1;
    for(int i=0; i<sum_arr.size(); i++){
        if(sum_arr[i]<ans){
            ans = sum_arr[i];
            ind = i;
        }
    }
    cout << ind+1 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // problemD();
    fence();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void alterEgo(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> odd;
        vector<int> even;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }
            else{
                odd.push_back(arr[i]);
            }
        }
        if(odd.size()%2!=0 && even.size()%2!=0){
            cout << -1 << endl;
        }
        else{
            sort(odd.begin(), odd.end(), greater<int>());
            sort(even.begin(), even.end(), greater<int>());
            vector<int> ans(n);
            int ind = 0;
            for(int i=0; i<odd.size()/2; i++){
                ans[ind] = (odd[i] + odd[i+(odd.size()/2)])/2;
                ans[ind+(n/2)] = (abs(odd[i] - odd[i+(odd.size()/2)]))/2;
                ind++;
            }
            for(int i=0; i<even.size()/2; i++){
                ans[ind] = (even[i] + even[i+(even.size()/2)])/2;
                ans[ind+(n/2)] = (abs(even[i] - even[i+(even.size()/2)]))/2;
                ind++;
            }
            for(int i=0; i<n; i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    alterEgo();
    return 0;
}
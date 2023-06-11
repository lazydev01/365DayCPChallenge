#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fourSum(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    set<vector<int>> ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            map<int, int> mp;
            for(int k=j+1; k<n; k++){
                int sum = arr[i]+arr[j]+arr[k];
                if(mp.find(target-sum)!=mp.end()){
                    vector<int> temp = {arr[i], arr[j], arr[k], target-sum};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                }
                mp[arr[k]]++;
            }
        }
    }
    for(auto i : ans){
        for(int j=0; j<4; j++){
            cout << i[j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fourSum();
    return 0;
}
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

void fourSumOptimal(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(i>0 && arr[i]==arr[i-1])continue;
        for(int j=i+1; j<n; j++){
            if(j>(i+1) && arr[j]==arr[j-1])continue;
            int k = j + 1;
            int l = n - 1;
            while(k<l){
                int sum = arr[i] + arr[j];
                sum+=arr[k];
                sum+=arr[l];
                if(sum==target){
                    cout << "HI" << endl;
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1])k++;
                    while(k<l && arr[l]==arr[l+1])l--;
                }
                else if(sum>target)l--;
                else k++;
            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<4; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // fourSum();
    fourSumOptimal();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void weNeedTheZero(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int allXor = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            allXor ^= arr[i];
        }
        if(n%2){
            // cout << "HELLO" << endl;
            cout << allXor << endl;
        }
        else{
            if(allXor == 0){
                cout << arr[0] << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
}

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> s;
    int n2 = nums2.size();
    map<int, int> mp;
    for(int i=n2-1; i>=0; i--){
        while(!s.empty() && s.top() <= nums2[i]){
            s.pop();
        }
        if(s.empty()){
            mp[nums2[i]] = -1;
        }
        else{
            mp[nums2[i]] = s.top();
        }
        s.push(nums2[i]);
    }
    vector<int> ans;
    for(auto i : nums1){
        ans.push_back(mp[i]);
    }
    return ans;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    weNeedTheZero();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void leadersInAnArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--){
        maxi = max(maxi, arr[i]);
        if(maxi==arr[i]){
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

void longestConsecutiveSequence(){
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> st;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    int ans = 1;
    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int cnt = 0;
            int x = it;
            while(st.find(x)!=st.end()){
                cnt++;
                x++;
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // leadersInAnArray();
    longestConsecutiveSequence();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void abBalance() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int abCount = 0;
        int baCount = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == 'a' && s[i+1] == 'b') abCount++;
            if(s[i] == 'b' && s[i+1] == 'a') baCount++;
        }
        if(abCount != baCount){
            s[0] = s[0] == 'a' ? 'b' : 'a';
        }
        cout << s << endl;
    }
}



vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    deque<int> dq;
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(!dq.empty() && dq.front() == i-k) dq.pop_front();
        while(!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();
        dq.push_back(i);
        if(i>=k-1) ans.push_back(nums[dq.front()]);
    }
    return ans;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    abBalance();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void angryMonk(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(k);
        int maxi = INT_MIN;
        for(int i=0; i<k; i++){
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        cout << (2 * (n - maxi) - (k - 1)) << endl;
    }
}

void countNumberOfSubarraysWithGivenXorK(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n+1);
    arr.push_back(0);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        arr[i] = arr[i] ^ arr[i-1];
    }
    unordered_map<int, int> mp;
    int ans = 0;
    
    for(int i=0; i<=n; i++){
        ans += mp[arr[i]^k];
        mp[arr[i]]++;
    }   
    cout << ans << endl;
}

void lengthOfLongestSubstringWithoutAnyRepeatingCharacter(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<int> st;
    int left = 0;
    int ans = 0;
    for(int right = 0; right < n; right++){
        if(st.find(s[right])!=st.end()){
            while(left < right && st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
        }
        st.insert(s[right]);
        ans = max(ans, right - left + 1);
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // angryMonk();
    // countNumberOfSubarraysWithGivenXorK();
    lengthOfLongestSubstringWithoutAnyRepeatingCharacter();
    return 0;
}

/*

4 2 2 6 4
4 6 4 2 6


*/
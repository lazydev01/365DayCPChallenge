#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcSeqSum(int n){
    return (n*(n+1))/2;
}

int calcCount(int low, int high, int target){
    int ans = 0;
    while(low <= high){
        int mid = (low + high) / 2;
        if(calcSeqSum(mid) <= target){
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

void longestGoodArray(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int cnt = 1;
        int diff = r - l;
        cout << cnt + calcCount(0, diff, diff) << endl;
    }
}

bool checkIfPalindrome(string s){
    if(s.size()==0) return false;
    for(int i=0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}

void getPalindromeSubsets(int index, string s, vector<string> &subset, vector<vector<string>> &ans, string currSubstring){
    if(index==s.size()){
        if(currSubstring.size()==0){
            ans.push_back(subset);
        }
        return;
    }
    if(checkIfPalindrome(currSubstring + s[index])){
        subset.push_back(currSubstring + s[index]);
        getPalindromeSubsets(index+1, s, subset, ans, "");
        subset.pop_back();
    }
    getPalindromeSubsets(index+1, s, subset, ans, currSubstring + s[index]);
}


void palindromePartitioning(){
    string s;
    cin >> s;
    int n = s.size();
    vector<string> subset;
    vector<vector<string>> ans;
    getPalindromeSubsets(0, s, subset, ans, "");
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // longestGoodArray();
    palindromePartitioning();
    return 0;
}
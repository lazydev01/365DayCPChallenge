#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

vector<int> divisibleSet(vector<int> &arr)
{
    int n = arr.size();
    vector<int> dp(n, 1), hash(n);
    int maxi = 1;
    int lastIndex = 0;
    sort(arr.begin(), arr.end());
    for(int i=1; i<n; i++){
        hash[i] = i;
        for(int j=0; j<i; j++){
            if(arr[i]%arr[j]==0 && 1+dp[j]>dp[i]){
                dp[i] = dp[j] + 1;
                hash[i] = j;
            }
        }
        if(dp[i]>maxi){
            maxi = dp[i];
            lastIndex = i;
        }
    }
    vector<int> temp;
    temp.push_back(arr[lastIndex]);
    while(hash[lastIndex]!=lastIndex){
        lastIndex = hash[lastIndex];
        temp.push_back(arr[lastIndex]);
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

bool checkPossible(string &s1, string &s2){
    if(s1.size()!=s2.size()+1){
        return false;
    }
    int i = 0;
    int j = 0;
    while(i<s1.size()){
        if(s1[i]==s2[j] && j<s2.size()){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(i==s1.size() && j==s2.size()){
        return true;
    }
    return false;
}

bool comp(string s1, string s2){
    return s1.size()<=s2.size();
}

int longestStrChain(vector<string> &arr){
    sort(arr.begin(), arr.end(), comp);
    int n = arr.size();
    vector<int> dp(n, 1);
    int maxi = 1;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(checkPossible(arr[i], arr[j]) && dp[j]+1>dp[i]){
                dp[i] = dp[j]+1;
            }
        }
        if(dp[i] > maxi){
            maxi = dp[i];
        }
    }
    return maxi;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
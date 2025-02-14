#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void prefiquence(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0;
        int j = 0;
        while(i<s1.size() && j<s2.size()){
            if(s1[i] == s2[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        cout << i << endl;
    }
}

bool cmp(pair<int, int> &a, pair<int, int> &b){
    if(a.second > b.second){
        return true;
    }
    return false;
}

void topKFrequentElements(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<pair<int, int>> vp;
    for(auto i : mp){
        vp.push_back(i);
    }
    sort(vp.begin(), vp.end(), cmp);
    vector<int> ans;
    for(int i=0; i<k; i++){
        ans.push_back(vp[i].first);
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

void topKFrequentElementsOptimal(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<vector<int>> freq(n+1, vector<int>());
    for(auto i : mp){
        freq[i.second].push_back(i.first);
    }
    vector<int> ans;
    for(int i=freq.size()-1; i>=0; i--){
        for(int j=0; j<freq[i].size(); j++){
            ans.push_back(freq[i][j]);
            k--;
            if(k==0){
                break;
            }
        }
        if(k==0){
            break;
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // prefiquence();
    // topKFrequentElements();
    topKFrequentElementsOptimal();
    return 0;
}
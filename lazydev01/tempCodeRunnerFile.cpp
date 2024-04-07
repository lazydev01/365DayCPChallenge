#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void meximizeTheArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            ans += (abs(arr[i]-i));
        }
        cout << ans << endl;
    }
}

void disjointNonDecreasingArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<bool> flag(n, false);
        int diff = 0;
        for(int i=0; i<n-1;){
            if(arr[i]>arr[i+1]){
                diff = max(diff, arr[i]-arr[i+1]);
                flag[i+1] = true;
                i+=2;
            }
            else{
                i++;
            }
        }
        for(int i=0; i<n; i++){
            if(flag[i]){
                arr[i]+=diff;
            }
        }
        bool ans = false;
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                ans = true;
                break;
            }
        }
        if(ans){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

bool customSort(pair<char, char> &a, pair<char, char> &b){
    if(a.first=='1' && a.second=='0'){
        return true;
    }
    else if(b.first=='1' && b.second=='0'){
        return false;
    }
    else if(a.first=='0' && a.second=='0'){
        return true;
    }
    else if(b.first=='0' && b.second=='0'){
        return false;
    }
    else if(a.first=='1' && a.second=='1'){
        return true;
    }
    else if(b.first=='1' && b.second=='1'){
        return false;
    }
    return true;
}

void binarySubstring(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<string, int> mp;
        for(int i=0; i<n; i+=2){
            mp[s.substr(i, 2)]++;
        }
        int ans = 0;
        ans+=(2*mp["00"]);
        ans+=(2*mp["11"]);
        if(mp["01"]>0){
            ans+=2;
        }
        int to_add_10 = 0;
        if(mp["01"]>0){
            to_add_10 = 2;
        }
        else{
            if(mp["00"]>0){
                to_add_10++;
            }
            else if(mp["11"]>0){
                to_add_10++;
            }
        }
        ans+=min(to_add_10,mp["10"]);
        cout << ans << endl;
        // vector<pair<char, char>> vp;
        // for(int i=0; i<n; i+=2){
        //     vp.push_back(make_pair(s[i], s[i+1]));
        // }
        // sort(vp.begin(), vp.end(), customSort);
        // string final_str = "";
        // for(auto i : vp){
        //     final_str += i.first;
        //     final_str += i.second;
        // }
        // int max_count = 0;
        // int count = 0;
        // for(int i=0; i<n-1; i++){
        //     if(final_str[i]=='1' && final_str[i+1]=='0'){
        //         count++;
        //         max_count=max(max_count, count);
        //         count = 0;
        //     }
        //     else{
        //         count++;
        //     }
        // }
        // max_count = max(max_count, count+1);
        // cout << max_count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // meximizeTheArray();
    // disjointNonDecreasingArray();
    binarySubstring();
    return 0;
}
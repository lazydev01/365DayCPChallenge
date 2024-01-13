#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeAllZero(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> pref_arr;
        pref_arr.push_back(arr[0]);
        for(int i=1; i<n; i++){
            if(arr[i]<=pref_arr.back()){
                pref_arr.push_back(arr[i]);
            }
        }
        reverse(pref_arr.begin(), pref_arr.end());
        int ans = n;
        for(int i=0; i<pref_arr.size(); i++){
            ans = min(ans, n-(i+1)+pref_arr[i]);
        }
        cout << ans << endl;
    }
}

void minimumWage(){
    int n;
    cin >> n;
    if(n>11){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void hattrick(){
    int t;
    cin >> t;
    while(t--){
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int ans = 0;
        int count = 0;
        vector<char> arr(6);
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        arr.push_back(d);
        arr.push_back(e);
        arr.push_back(f);
        for(auto i : arr){
            if(i=='W'){
                count++;
            }
            else{
                count = 0;
            }
            ans = max(ans, count);
        }
        if(ans>=3){
            cout << "YES" << endl;
        }
        else{   
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // makeAllZero();
    // minimumWage();
    hattrick();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maxNutrition(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[a[i]] = max(b[i], m[a[i]]);
        }
        int sum = 0;
        for(auto i : m){
            sum += i.second;
        }
        cout << sum << endl;
    }
}

void threeLogiciansWalkIntoABbar(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> ans(n);
        for(int i=0; i<n; i++){
            if(i==0){
                if(s[i]=='0'){
                    ans[i] = "NO";
                }
                else{
                    ans[i] = "IDK";
                }
            }
            else{
                if(s[i]=='0' || ans[i-1]=="NO"){
                    ans[i] = "NO";
                }
                else{
                    ans[i] = "IDK";
                }
            }
        }
        if(ans[n-1]=="IDK"){
            ans[n-1] = "YES";
        }
        for(string s : ans){
            cout << s << endl;
        }
    } 
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // maxNutrition();
    threeLogiciansWalkIntoABbar();
    return 0;
}
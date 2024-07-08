#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findAndReplace(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[s[i]].push_back(i);
        }
        bool flag = false;
        for(auto i : mp){
            bool isOdd = false;
            bool isEven = false;
            for(int j : i.second){
                if(j%2){
                    isOdd = true;
                }
                else{
                    isEven = true;
                }
                if(isOdd && isEven){
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    findAndReplace();
    return 0;
}
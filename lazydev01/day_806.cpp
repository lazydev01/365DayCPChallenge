#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void numericStringTemplate(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin >> nums[i];
        }
        int m;
        cin >> m;
        for(int i=0; i<m; i++){
            string s;
            cin >> s;
            if(s.size() != n){
                cout << "NO" << endl;
                continue;
            }
            bool condSatisfied = true;
            vector<int> charToIntMapping(26, INT_MAX);
            for(int i=0; i<n; i++){
                if(charToIntMapping[s[i] - 'a'] != INT_MAX && charToIntMapping[s[i] - 'a'] != nums[i]){
                    condSatisfied = false;
                    break;
                }
                charToIntMapping[s[i] - 'a'] = nums[i];
            }
            set<int> unq;
            int count = 0;
            for(int i=0; i<26; i++){
                if(charToIntMapping[i] != INT_MAX){
                    count++;
                    unq.insert(charToIntMapping[i]);
                }
            }
            if(unq.size() != count || !condSatisfied){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    numericStringTemplate();
    return 0;
}
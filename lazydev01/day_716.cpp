#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yetAnotherPalindromeProblem(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        bool isPalindrome = false;
        for(int i=0; i<n; i++){
            if(mp[arr[i]]){
                if(i+1-mp[arr[i]]>1){
                    isPalindrome = true;
                    break;
                }
            }
            else{
                mp[arr[i]] = i+1;
            }
        }
        if(isPalindrome){
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

    yetAnotherPalindromeProblem();
    return 0;
}
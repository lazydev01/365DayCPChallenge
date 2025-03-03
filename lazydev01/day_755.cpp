#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void entertainmentInMac(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0;
        for(int i=0; i<n/2; i++){
            if(s[i] - 'a' > s[n-i-1] - 'a'){
                flag = -1;
                break;
            }
            else if(s[i] - 'a' < s[n-i-1] - 'a'){
                flag = 1;
                break;
            }
        }
        if(flag == -1){
            string reversedString = s;
            reverse(reversedString.begin(), reversedString.end());
            cout << reversedString + s << endl;
        }
        else{
            cout << s << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    entertainmentInMac();
    return 0;
}
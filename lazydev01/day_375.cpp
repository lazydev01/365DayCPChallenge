#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void christmasCandy(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int maxi = arr[0];
        int count = 0;
        for(int i=1; i<n; i++){
            if(arr[i]<maxi){
                count++;
            }
            else{
                maxi =  arr[i];
            }
        }
        cout << count << endl;
    }
}

void rockPaperScissors(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for(int i=0; i<n; i++){
            ans += 'P';
        }
        int count = 0;
        for(auto i : s){
            if(i=='R'){
                count++;
            }
        }
        int left = (n/2) + 1 - count;
        for(int i=n-1; i>=0; i--){
            if(left<=0){
                break;
            }
            if(s[i]=='R'){
                continue;
            }
            else if(s[i]=='P'){
                ans[i]='S';
            }
            else{
                ans[i]='R';
            }
            left--;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // christmasCandy();
    rockPaperScissors();
    return 0;
}
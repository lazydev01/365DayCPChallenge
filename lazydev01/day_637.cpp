#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void blackAndWhiteStripe(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int stripesLeft = k;
        int minStripes = k;
        for(int i=0; i<k; i++){
            if(s[i]=='B'){
                stripesLeft--;
            }
        }
        minStripes = min(minStripes, stripesLeft);
        for(int i=k; i<n; i++){
            if(s[i-k]=='B'){
                stripesLeft++;
            }
            if(s[i]=='B'){
                stripesLeft--;
            }
            minStripes = min(minStripes, stripesLeft);
        }
        cout << minStripes << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    blackAndWhiteStripe();
    return 0;
}
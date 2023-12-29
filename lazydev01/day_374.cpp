#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void colourBlindness(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string first, second;
        cin >> first >> second;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(!((first[i]=='R' && second[i]=='R') || (first[i]=='B' && second[i]=='B') || (first[i]=='G' && second[i]=='G') || (first[i]=='B' && second[i]=='G') || (first[i]=='G' && second[i]=='B'))){
                flag = true;
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

    colourBlindness();
    return 0;
}
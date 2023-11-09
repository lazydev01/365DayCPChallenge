#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rockPaperScissor(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int count1=0;
        int count2=0;
        for(int i=0; i<n; i++){
            if(s[i]==t[i]){
                continue;
            }
            else if(s[i]=='R' && t[i]=='P'){
                count2++;
            }
            else if(s[i]=='P' && t[i]=='S'){
                count2++;
            }
            else if(s[i]=='S' && t[i]=='R'){
                count2++;
            }
            else{
                count1++;
            }
        }
        if(count1>count2){
            cout << 0 << endl;
        }
        else{
            cout << ((count2-count1)/2)+1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    rockPaperScissor();
    return 0;
}


/*

6 1
5 2
4 3

6 3
5 4
4 5

0 1
*/
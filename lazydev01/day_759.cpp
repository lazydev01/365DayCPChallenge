#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void frogJumps(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int distance = 0;
        int lastR = -1;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'R'){
                distance = max(distance, i - lastR);
                lastR = i;
            }
        }
        distance = max(distance, s.size() - lastR);
        if(lastR == -1){
            distance = s.size() + 1;
        }
        cout << distance << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    frogJumps();
    return 0;
}
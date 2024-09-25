#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void comparisonStrings(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      int consecutives = 1;
      int answer = 1;
      char curr = s[0];
      for(int i=1; i<n; i++){
        if(s[i]==curr){
          consecutives++;
        }
        else{
          consecutives=1;
        }
        curr = s[i];
        answer = max(answer, consecutives);
      }
      cout << answer + 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    comparisonStrings();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void divisibilityBy8(){
  string n;
  cin >> n;
  n = "00" + n;
  for(int i=0; i<n.size(); i++){
    for(int j=i+1; j<n.size(); j++){
      for(int k = j+1; k<n.size(); k++){
        int num = ((n[i]-'0')*100 + (n[j]-'0')*10 + (n[k]-'0'));
        if(num % 8 == 0){
          cout << "YES" << endl;
          cout << num << endl;
          return;
        }
      }
    }
  }
  cout << "NO" << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    divisibilityBy8();
    return 0;
}
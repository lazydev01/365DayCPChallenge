#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"


void chefAndInstantNoodles(){
    int x, y;
    cin >> x >> y;
    cout << x*y << endl;
}

void qaq(){
  string s;
  cin >> s;
  int n = s.size();
  vector<int> q_arr;
  for(int i = 0; i < n; i++){
    if(s[i]=='Q'){
      q_arr.push_back(i);
    }
  }
  int count = 0;
  for(int i=0; i<n; i++){
    if(s[i]=='A'){
      int a_ind = upper_bound(q_arr.begin(), q_arr.end(), i) - q_arr.begin();
      int left_q = a_ind;
      int right_q = q_arr.size() - a_ind;
      count+=(left_q * right_q);
    }
  }
  cout << count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // chefAndInstantNoodles();
    qaq();
    return 0;
}
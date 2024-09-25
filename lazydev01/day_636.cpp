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

bool compare(pair<double, int> &p1, pair<double, int> &p2){
  if(p1.first > p2.first){
    return true;
  }
  return false;
}

void fractionalKnapsack(){
  int n, w;
  cin >> n >> w;
  vector<double> values(n);
  vector<int> weights(n);
  for(int i=0; i<n; i++){
    cin >> values[i];
  }
  for(int i=0; i<n; i++){
    cin >> weights[i];
  }
  for(int i=0; i<n; i++){
    values[i] = values[i]/weights[i];
  }
  vector<pair<double, int>> vp;
  for(int i=0; i<n; i++){
    vp.push_back(make_pair(values[i], weights[i]));
  }
  sort(vp.begin(), vp.end(), compare);
  double totalSum = 0;
  for(auto i : vp){
    if(w==0){
      break;
    }
    int weight = min(i.second, w);
    totalSum+=(weight * i.first);
    w-=weight;
  }
  cout << totalSum << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // comparisonStrings();
    fractionalKnapsack();
    return 0;
}
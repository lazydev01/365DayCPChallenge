#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// NS Solutions Corporation Programming Contest 2023（AtCoder Beginner Contest 303）

// Problem 1

pair<int, int> makeAMove(pair<int, int> pr, char c){
  if(c=='R'){
    pr.first = pr.first + 1;
  }
  else if(c=='L'){
    pr.first = pr.first - 1;
  }
  else if(c=='U'){
    pr.second = pr.second + 1;
  }
  else if(c=='D'){
    pr.second = pr.second - 1;
  }
  return pr;
}

void problemC(){


   int n, m, h, k;
    cin >> n >> m >> h >> k;
    string str;
    cin >> str;
    map<pair<int, int>, int> mp;
    for(int i=0; i<m; i++){
      int x, y;
      cin >> x >> y;
      pair<int, int> p = make_pair(x, y);
      mp[p] = 1;
    }
    pair<int, int> currentPos = make_pair(0, 0);
    bool dead = false;
    for(int i=0; i<n; i++){
      currentPos = makeAMove(currentPos, str[i]);
      h--;
      if(h<0){
        dead = true;
        break;
      }
      if(h<k && mp[currentPos]==1){
        h = k;
        mp[currentPos] = 0;
      }
      // cout << h << endl;
    }
    if(dead){
      cout << "No" << endl;
    }
    else{
      cout << "Yes" << endl;
    }
}

void problemB(){

    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat;
    for(int i=0; i<m; i++){
      vector<int> row(n);
      for(int j=0; j<n; j++){
        cin >> row[j];
      }
      mat.push_back(row);
    }
    map<int, set<int>> ms;
    for(int i=0; i<mat.size(); i++){
      for(int j=0; j<mat[0].size(); j++){
        if(j==0){
          ms[mat[i][j]].insert(mat[i][j+1]);
        }
        else if(j==mat[0].size()-1){
          ms[mat[i][j]].insert(mat[i][j-1]);
        }
        else{
          ms[mat[i][j]].insert(mat[i][j+1]);
          ms[mat[i][j]].insert(mat[i][j-1]);
        }
      }
    }
    int count = 0;
    // for(auto i : ms){
    //   cout << i.first << "  =>   ";
    //   for(auto j : i.second){
    //     cout << j << " ";
    //   }
    //   cout << endl;
    // }
    for(auto i : ms){
      count += ((n-1)-i.second.size());
    }
    cout << count/2 << endl;
}

void problemA(){
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    bool flag = false;
    for(int i=0; i<n; i++){
      if(s1[i]==s2[i]){
        flag = false;
      }
      else if((s1[i]=='1' && s2[i]=='l') || (s1[i]=='l' && s2[i]=='1')){
        flag = false;
      }
      else if((s1[i]=='0' && s2[i]=='o') || (s1[i]=='o' && s2[i]=='0')){
        flag = false;
      }
      else{
        flag = true;
        break;
      }
    }
    if(flag){
      cout << "No" << endl;
    }
    else{
      cout << "Yes" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
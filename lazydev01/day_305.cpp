#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void problemA(){
    string s, t;
    cin >> s >> t;
    cout << s << " san" << endl;
}

void problemB(){
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        pair<int, int> p = make_pair(a, b);
        vp[i] = p;
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[vp[i].second] += vp[i].first;
    }
    int max_sum = INT_MIN;
    for(int i=0; i<=24; i++){
        int sum = 0;
        for(int j=i; j<i+9; j++){
            if(j>=24){
                sum += mp[j-24];
            }
            else{
                sum += mp[j];
            }
        }
        max_sum = max(max_sum, sum);
    }
    cout << max_sum << endl;
}

void traverse(int i, int j, int h, int w, vector<vector<char>> &vv){
    vv[i][j] = '.';
    for(int ii=-1; ii<=1; ii++){
        for(int jj=-1; jj<=1; jj++){ 
            if(vv[i+ii][j+jj]=='#'){
                traverse(i+ii, j+jj, h, w, vv);
            }
        }
    }
}

void problemC(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> vv(h+2, vector<char>(w+2, '.'));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> vv[i+1][j+1];
        }
    }
    int count = 0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(vv[i+1][j+1]=='#'){
                count++;
                traverse(i+1, j+1, h, w, vv);
            }
        }
    }
    cout << count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // problemA();
    // problemB();
    problemC();
    return 0;
}
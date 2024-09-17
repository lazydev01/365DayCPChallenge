#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void exams(){
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for(int i=0; i<n; i++){
        cin >> vp[i].first >> vp[i].second;
    }
    sort(vp.begin(), vp.end());
    int prevExamDate = 0;
    for(int i=0; i<n; i++){
        if(vp[i].second >= prevExamDate){
            prevExamDate = vp[i].second;
        }
        else{
            prevExamDate = vp[i].first;
        }
        
    }
    cout << prevExamDate << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    exams();
    return 0;
}
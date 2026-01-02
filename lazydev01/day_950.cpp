#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void trianglesOnARectangle(){
    int t;
    cin >> t;
    while(t--){
        int w, h;
        cin >> w >> h;
        int n_x1;
        cin >> n_x1;
        vector<int> x1(n_x1);
        for(int i = 0; i < n_x1; i++){
            cin >> x1[i];
        }
        int n_x2;
        cin >> n_x2;
        vector<int> x2(n_x2);
        for(int i = 0; i < n_x2; i++){
            cin >> x2[i];
        }
        int n_y1;
        cin >> n_y1;
        vector<int> y1(n_y1);
        for(int i = 0; i < n_y1; i++){
            cin >> y1[i];
        }
        int n_y2;
        cin >> n_y2;
        vector<int> y2(n_y2);
        for(int i = 0; i < n_y2; i++){
            cin >> y2[i];
        }
        sort(x1.begin(), x1.end());
        sort(x2.begin(), x2.end());
        sort(y1.begin(), y1.end());
        sort(y2.begin(), y2.end());
        int ans = max(max(max((x1[n_x1 - 1] - x1[0]) * h, (x2[n_x2 - 1] - x2[0]) * h), (y1[n_y1 - 1] - y1[0]) * w), (y2[n_y2 - 1] - y2[0]) * w);
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    trianglesOnARectangle();
    return 0;
}
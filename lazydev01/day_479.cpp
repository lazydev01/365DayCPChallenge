#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void footballTraining(){
    int a, b;
    cin >> a >> b;
    if(a>b){
        cout << "FREEKICK" << endl;
    }
    else{
        cout << "PENALTY" << endl;
    }
}

void pepBidding(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int att_a = 0, att_p = 0, def_a = 0, def_p = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            att_a += a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> a[i];
            def_a += a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> a[i];
            att_p += a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> a[i];
            def_p += a[i];
        }
        if(((att_a > att_p) && (def_a > def_p))){
            cout << "A" << endl;
        }
        else if((att_p > att_a) && (def_p > def_a)){
            cout << "P" << endl;
        }
        else{
            cout << "DRAW" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // footballTraining();
    pepBidding();
    return 0;
}
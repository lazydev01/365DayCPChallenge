#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void advitiya(){
    int n;
    cin >> n;
    if(n>=16){
        cout << "ADVITIYA" << endl;
    }
    else{
        cout << "WAITING FOR ADVITIYA" << endl;
    }
}

void judged(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        vector<int> arr = {a, b, c, d, e};
        int count = 0;
        for(auto i : arr){
            if(i){
                count++;
            }
        }
        if(count>3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // advitiya();
    judged();
    return 0;
}
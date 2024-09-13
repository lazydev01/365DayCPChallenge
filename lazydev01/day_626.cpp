#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sakurosExam(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a%2){
            cout << "NO" << endl;
            continue;
        }
        if(b%2==0){
            cout << "YES" << endl;
        }
        else{
            if(a!=0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sakurosExam();
    return 0;
}
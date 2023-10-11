#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twoButtons(){
    int n, m;
    cin >> n >> m;
    if(n>=m) cout << n-m << endl;
    else{
        int count = 0;
        while(m>n){
            if(m%2==0){
                m/=2;
            }
            else{
                m+=1;
            }
            count++;
        }
        cout << count + (n-m) << endl;
    }
}

void sumOfThree(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=6 || n==9){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            if((n-3)%3==0){
                cout << 1 << " " << 4 << " " << n-5 << endl;
            }
            else{
                cout << 1 << " " << 2 << " " << (n-3) << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sumOfThree();
    return 0;
}
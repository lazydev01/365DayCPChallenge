#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool subtract(int n, int x){
    if(n<3){
        return false;
    }
    else if(n==3 || n==4){
        return true;
    }
    else{
        return subtract(n-x, 3) || subtract(n-x, 4);
    }
}

void makeNZero(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ans = subtract(n, 3) || subtract(n, 4);
        if(ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

void maximumScore(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x;
        int ones = 0;
        int zeros = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x==0){
                zeros++;
            }
            else{
                ones++;
            }
        }
        cout << min(ones, zeros) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // makeNZero();
    maximumScore();
    return 0;
}

/*

1 1 0 1 1 1


*/
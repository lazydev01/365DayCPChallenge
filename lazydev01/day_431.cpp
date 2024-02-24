#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void healthySleep(){
    int n;
    cin >> n;
    if(n<8){
        cout << "LESS" << endl;
    }
    else if(n==8){
        cout << "PERFECT" << endl;
    }
    else{
        cout << "MORE" << endl;
    }
}

void problemReviews(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool flag = false;
        for(auto i : arr){
            if(i<=4){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // healthySleep();
    problemReviews();
    return 0;
}
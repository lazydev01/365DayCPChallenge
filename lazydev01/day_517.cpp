#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void turtleMath(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        int rem_one = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
            if(arr[i]%3==1){
                rem_one++;
            }
        }
        if(sum%3==0){
            cout << 0 << endl;
        }
        else if(sum%3==2){
            cout << 1 << endl;
        }
        else if(sum%3==1){
            if(rem_one>0){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    turtleMath();
    return 0;
}
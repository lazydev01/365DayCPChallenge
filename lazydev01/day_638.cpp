#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rudolfAnd121(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+2);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        arr[n] = arr[n+1] = 0;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(arr[i+1]>=arr[i]*2){
                arr[i+1]-=(arr[i]*2);
                arr[i+2]-=arr[i];
            }
            else{
                flag = false;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    rudolfAnd121();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void busToUdayland(){
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i][0]=='O' && arr[i][1]=='O'){
            flag = true;
            arr[i][0] = '+';
            arr[i][1] = '+';
            break;
        }
        if(arr[i][3]=='O' && arr[i][4]=='O'){
            flag = true;
            arr[i][3] = '+';
            arr[i][4] = '+';
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
        for(int i=0; i<n; i++){
            cout << arr[i] << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    busToUdayland();
    return 0;
}
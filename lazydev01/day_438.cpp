#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void alogmaniacFinals(){
    int n;
    cin >> n;
    if(n==17){
        cout << "YAY" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void roomAllocation(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        for(int i=0; i<n; i++){
            int j;
            cin >> j;
            count+=((j+1)/2);
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // alogmaniacFinals();
    roomAllocation();
    return 0;
}
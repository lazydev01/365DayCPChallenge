#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void daltonTheTeacher(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int ownChairs = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==i+1){
                ownChairs++;
            }
        }
        cout << (ownChairs+1)/2 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    daltonTheTeacher();
    return 0;
}
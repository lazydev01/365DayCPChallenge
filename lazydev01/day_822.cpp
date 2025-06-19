#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void notDividing(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
        }
        if(arr[0] == 1){
            arr[0]++;
        }
        for(int i = 1; i < n; i++){
            if(arr[i] == 1){
                arr[i]++;
            }
            while(arr[i] % arr[i-1] == 0){
                arr[i]++;
            }
        }
        for(int i = 0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    notDividing();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void teamTraining(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int count = 0;
        int elemCounter = 1;
        for(int i = 0; i < n;){
            if(arr[i] >= x){
                count++;
                i++;
            }
            else{
                if(elemCounter * arr[i] >= x){
                    count++;
                    elemCounter = 1;
                }
                else{
                    elemCounter++;
                }
                i++;
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    teamTraining();
    return 0;
}
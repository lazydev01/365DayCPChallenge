#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void brokenTelephone(){
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
        int count = 0;
        for(int i=1; i<n; i++){
            if(arr[i-1]!=arr[i]){
                if(!flag){
                    count+=2;
                }
                else{
                    count+=1;
                }
                flag = true;
            }
            else{
                flag = false;
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    brokenTelephone();
    return 0;
}
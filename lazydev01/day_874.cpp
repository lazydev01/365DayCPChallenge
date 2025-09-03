#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void nitDestroysTheUniverse(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int islands = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 0){
                if(count > 0){
                    islands++;
                    count = 0;
                }
            }
            else{
                count++;
            }
        }
        if(count > 0){
            islands++;
            count = 0;
        }
        cout << (islands >= 2 ? 2 : islands) << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    nitDestroysTheUniverse();
    return 0;
}
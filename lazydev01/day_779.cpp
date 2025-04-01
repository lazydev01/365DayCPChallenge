#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void everybodyLikesGoodArrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int cnt = 0;
        bool isEven;
        if(arr[0]%2==0){
            isEven = true;
        }
        else{
            isEven = false;
        }
        for(int i=1; i<n; i++){
            if(isEven){
                if(arr[i]%2==0){
                    cnt++;
                }
                else{
                    isEven = false;
                }
            }
            else{
                if(arr[i]%2==1){
                    cnt++;
                }
                else{
                    isEven = true;
                }
            }
        }
        cout << cnt << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    everybodyLikesGoodArrays();
    return 0;
}
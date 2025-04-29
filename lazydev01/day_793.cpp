#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void evenOddGame(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        bool aliceTurn = true;
        int aliceScore = 0;
        int bobScore = 0;
        for(int i=0; i<n; i++){
            if(aliceTurn){
                if(arr[i]%2==0){
                    aliceScore+=arr[i];
                }
            }
            else{
                if(arr[i]%2==1){
                    bobScore+=arr[i];
                }
            }
            aliceTurn = !aliceTurn;
        }
        if(aliceScore > bobScore){
            cout << "Alice" << endl;
        }
        else if(aliceScore < bobScore){
            cout << "Bob" << endl;
        }
        else{
            cout << "Tie" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    evenOddGame();
    return 0;
}
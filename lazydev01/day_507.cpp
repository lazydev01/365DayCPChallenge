#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void stripes(){
    int t;
    cin >> t;
    while(t--){
        vector<string> arr(8);
        for(int i=0; i<8; i++){
            cin >> arr[i];
        }
        bool red = false;
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++){
                if(arr[i][j]==arr[i][j+1]){
                    if(j==6){
                        if(arr[i][j]=='R'){
                            red = true;
                        }
                    }
                }
                else{
                    break;
                }
            }
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++){
                if(arr[j][i]==arr[j+1][i]){
                    if(j==6){
                        if(arr[j][i]=='B'){
                            red = false;
                        }
                    }
                }
                else{
                    break;
                }
            }
        }
        if(red){
            cout << "R" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    stripes();
    return 0;
}
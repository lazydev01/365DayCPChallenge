#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void squaresAndCubes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cubes = cbrt(n);
        int squares  = sqrt(n);
        int commonSquaresAndCubes = sqrt(cubes);
        int ans = cubes + squares - commonSquaresAndCubes;
        cout << ans << endl;
    }
}

void vladAndShapes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int prev_one = 0;
        int curr_one = 0;
        bool isSquare = false;
        for(int i=0; i<n; i++){
            if(prev_one==curr_one && curr_one!=0){
                isSquare = true;
                break;
            }
            prev_one = curr_one;
            curr_one = 0;
            for(int j=0; j<n; j++){
                if(arr[i][j]== '1'){
                    curr_one++;
                }
            }
        }
        if(prev_one==curr_one && curr_one!=0){
            isSquare = true;
        }
        if(isSquare){
            cout << "SQUARE" << endl;
        }
        else{
            cout << "TRIANGLE" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // squaresAndCubes();
    vladAndShapes();
    return 0;
}
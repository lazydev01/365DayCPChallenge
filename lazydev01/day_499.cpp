#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool binarySearchForCubes(int low, int high, int target, bool print){
    if(low>high){
        return false;
    }
    if((low*low*low) == target){
        return true;
    }
    if((high*high*high) == target){
        return true;
    }
    int mid = (low+high)/2;
    int cube_mid = mid*mid*mid;
    if(cube_mid == target){
        return true;
    }
    else if(cube_mid > target){
        high = mid - 1;
        return binarySearchForCubes(low, high, target, true);
    }
    else{
        low = mid + 1;
        return binarySearchForCubes(low, high, target, true);
    }
}

void sumOfCubes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool cubes = false;
        for(int i=1; i<=n; i++){
            if(i*i*i>=n){
                break;
            }
            int tmp_n = n - (i*i*i);
            cubes = binarySearchForCubes(i, min(n, (long long)10000), tmp_n, false);
            if(cubes){
                break;
            }
        }
        if(cubes){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sumOfCubes();
    return 0;
}
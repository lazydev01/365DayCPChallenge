#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void squareOrNot(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int low = 1;
        int high = n;
        int root = -1;
        while(low<=high){
            int mid = (low + high)/2;
            if(mid*mid<=n){
                root = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        bool canBeSquare = true;
        if(root * root == n){
            for(int i=0; i<root; i++){
                for(int j=0; j<root; j++){
                    if(j==0 || j==root-1 || (i*root + j < root) || (i*root + j>=(root*(root-1)))){
                        if(s[i*root + j] != '1'){
                            canBeSquare = false;
                            break;
                        }
                    }
                    else{
                        if(s[i*root+j]!='0'){
                            canBeSquare = false;
                            break;
                        }
                    }
                }
            }
            if(canBeSquare){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
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

    squareOrNot();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gregorAndCryptography(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==5){
            cout << 2 << " " << 4 << endl;
        }
        else{
            cout << 2 << " " << n/2 << endl;
        }
        
    }
}

void alienOr(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<string> arr(n);  
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> one_count;
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                if(arr[i][j]=='1'){
                    one_count[i]++;
                }
            }
        }
        vector<bool> mark(k, false);
        for(auto i : one_count){
            if(i.second==1){
                for(int j=0; j<k; j++){
                    if(arr[i.first][j]=='1'){
                        mark[j] = true;
                        break;
                    }
                }
            }
        }
        bool ans = true;
        for(bool i : mark){
            if(!i){
                ans = false;
                break;
            }
        }
        if(ans){
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
    // gregorAndCryptography();
    alienOr();
    return 0;
}
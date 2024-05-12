#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void giftCarpet(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        string to_search = "vika";
        int index=0;
        bool vikaLikes = false;
        for(int i=0; i<m; i++){
            if(vikaLikes){
                break;
            }
            for(int j=0; j<n; j++){
                if(arr[j][i]==to_search[index]){
                    index++;
                    if(index==4){
                        vikaLikes = true;
                    }
                    break;
                }
            }
        }
        if(vikaLikes){
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

    giftCarpet();
    return 0;
}
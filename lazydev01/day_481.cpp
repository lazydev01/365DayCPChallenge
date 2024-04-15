#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void productOfThreeNumbers(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans;
        bool flag = false;
        for(int i=2; i*i*i<n; i++){
            if(n%i==0){
                ans.push_back(i);
                flag = true;
                break;
            }
        }
        if(flag){
            flag = false;
            for(int i=(ans[0]+1); i*i<(n/(ans[0])); i++){
                if((n/ans[0])%i==0){
                    ans.push_back(i);
                    flag=true;
                    break;
                }
            }
            if(flag){
                cout << "YES" << endl;
                cout << ans[0] << " " << ans[1] << " " <<  (n/(ans[0]*ans[1])) << endl;
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

    productOfThreeNumbers();
    return 0;
}
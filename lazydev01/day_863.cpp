#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void shoeShuffling(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];  
        }
        int curr = arr[0];
        int count = 1;
        bool notPossible = false;
        vector<int> ans;
        for(int i = 1; i< n; i++){
            if(arr[i] == curr){
                count = i+1;
            }
            else{
                int sz = ans.size();
                if(count - sz == 1){
                    notPossible = true;
                    break;
                }
                else{
                    ans.push_back(count);
                    for(int j = sz+1; j < count; j++){
                        ans.push_back(j);
                    }
                    count = i+1;
                    curr = arr[i];
                }
            }
        }
        int sz = ans.size();
        if(count - sz == 1){
            notPossible = true;
        }
        else{
            ans.push_back(count);
            for(int j = sz+1; j < count; j++){
                ans.push_back(j);
            }
        }
        if(notPossible){
            cout << -1 << endl;
            continue;
        }
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    shoeShuffling();
    return 0;
}
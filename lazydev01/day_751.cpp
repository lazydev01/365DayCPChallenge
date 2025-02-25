#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void assemblyViaMinimums(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int elements = (n * (n-1))/2;
        vector<int> arr(elements);
        map<int, int> mp;
        set<int> s;
        for(int i=0; i<elements; i++){
            cin >> arr[i];
            mp[arr[i]]++;
            s.insert(arr[i]);
        }
        vector<int> ans;
        n--;
        for(auto i : s){
            int val = mp[i];
            while(val>0){
                ans.push_back(i);
                val-=n;
                n--;
            }
        }
        ans.push_back(1e9);
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }        
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    assemblyViaMinimums();
    return 0;
}
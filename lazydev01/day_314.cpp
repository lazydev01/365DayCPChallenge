#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void doremysPaint3(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        if(mp.size()>2){
            cout << "NO" << endl;
        }
        else if(mp.size()==1){
            cout << "YES" << endl;
        }
        else{
            int first = -1;
            int second = -1;
            for(auto i: mp){
                if(first!=-1){
                    second = i.first;
                }
                else{
                    first = i.first;
                }
            }
            if(mp[first]==mp[second] || mp[first]==mp[second]+1 || mp[first]==mp[second]-1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    doremysPaint3();
    return 0;
}
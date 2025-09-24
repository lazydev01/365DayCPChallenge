#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void arrayMerging(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        map<int, int> ma, mb;
        int count = 1;
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
            if(i > 0){
                if(a[i] == a[i-1]){
                    count++;
                }
                else{
                    ma[a[i-1]] = max(ma[a[i-1]], count);
                    count = 1;
                }
            }
        }
        ma[a[n-1]] = max(ma[a[n-1]], count);
        count = 1;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            s.insert(b[i]);
            if(i > 0){
                if(b[i] == b[i-1]){
                    count++;
                }
                else{
                    mb[b[i-1]] = max(mb[b[i-1]], count);
                    count = 1;
                }
            }
        }
        mb[b[n-1]] = max(mb[b[n-1]], count);
        int maxCount = 0;
        for(auto i : s){
            maxCount = max(maxCount, ma[i] + mb[i]);
        }
        cout << maxCount << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    arrayMerging();
    return 0;
}
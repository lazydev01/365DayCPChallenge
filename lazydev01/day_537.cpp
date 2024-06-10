#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void wordGame(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string, int> mp;
        vector<string> a(n);
        vector<string> b(n);
        vector<string> c(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
            mp[b[i]]++;
        }
        for(int i=0; i<n; i++){
            cin >> c[i];
            mp[c[i]]++;
        }
        int count_a = 0, count_b = 0, count_c = 0;
        for(int i=0; i<n; i++){
            if(mp[a[i]]==1){
                count_a+=3;
            }
            else if(mp[a[i]]==2){
                count_a+=1;
            }
        }
        for(int i=0; i<n; i++){
            if(mp[b[i]]==1){
                count_b+=3;
            }
            else if(mp[b[i]]==2){
                count_b+=1;
            }
        }
        for(int i=0; i<n; i++){
            if(mp[c[i]]==1){
                count_c+=3;
            }
            else if(mp[c[i]]==2){
                count_c+=1;
            }
        }
        cout << count_a << " " << count_b << " " << count_c << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    wordGame();
    return 0;
}
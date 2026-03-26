#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void strongVertices(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            a[i] -= b[i];
            maxi = max(maxi, a[i]);
        }
        vector<int> strongVertices;
        for(int i = 0; i < n; i++){
            if(a[i] == maxi){
                strongVertices.push_back(i+1);
            }
        }
        cout << strongVertices.size() << endl;
        for(int i = 0; i < strongVertices.size(); i++){
            cout << strongVertices[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    strongVertices();
    return 0;
}
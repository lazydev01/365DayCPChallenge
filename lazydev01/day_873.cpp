#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void romanticGlasses(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        bool found = false;
        map<int, int> mp;
        mp[0]++;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i%2 == 0){
                arr[i] = -1 * arr[i];
            }
            sum+=arr[i];
            mp[sum]++;
            if(mp[sum] >=2){
                found = true;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    romanticGlasses();
    return 0;
}

/*

1 6 9 8 55 3 14 2 7 2

1 6 10 14 64 17 78 19 95 21






*/
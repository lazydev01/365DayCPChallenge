#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void letters(){
    int n, m;
    cin >> n >> m;
    vector<int> dormitories(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(i > 0){
            dormitories[i] = dormitories[i-1] + x;
        }
        else{
            dormitories[i] = x;
        }
    }
    for(int i = 0; i < m; i++){
        int room;
        cin >> room;
        int index = lower_bound(dormitories.begin(), dormitories.end(), room) - dormitories.begin();
        cout << index + 1 << " " << room - (index > 0 ? dormitories[index - 1] : 0) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    letters();    
    return 0;
}
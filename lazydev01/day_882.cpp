#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void buyingTorches(){
    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int count = k;
        int coalSticks = y * k;
        int totalSticks = coalSticks + k;
        count += (ceil)((totalSticks - 1) / ((x - 1) * 1.0));
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    buyingTorches();
    return 0;
}

/*

2 1 5

2 3 4 5 6 7 8 9 10

42 + 41 + 41 +





*/
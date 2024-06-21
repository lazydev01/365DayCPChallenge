#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void phoneDesktop(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int max_two = 2;
        int max_one = 7;
        int total_blocks = 5*3;
        int boxes_needed = 0;
        boxes_needed += ((ceil)(y/(max_two*1.0)));
        int remaining_blocks = boxes_needed*7;
        if(y%2) remaining_blocks += (4);
        if(x > remaining_blocks){
            x-=remaining_blocks;
            boxes_needed += ((ceil)(x/(total_blocks * 1.0)));
        }
        cout << boxes_needed << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    phoneDesktop();
    return 0;
}
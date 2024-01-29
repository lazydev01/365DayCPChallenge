#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void businessTrip(){
    int k;
    cin >> k;
    vector<int> months(12);
    for(int i = 0; i < 12; i++){
        cin >> months[i];
    }
    sort(months.begin(), months.end(), greater<int>());
    int ans = 0;
    int count = 0;
    for(int month : months){
        if(ans>=k){
            break;
        }
        ans+=month;
        count++;
    }
    if(ans<k){
        cout << -1 << endl;
    }
    else{
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    businessTrip();
    return 0;
}
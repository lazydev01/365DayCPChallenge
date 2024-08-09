#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cinemaLine(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        if(val==50){
            if(mp[25]==0){
                cout << "NO" << endl;
                return;
            }
            else{
                mp[50]++;
                mp[25]--;
            }
        }
        else if(val==100){
            if((mp[50]==0 && mp[25]<3) || (mp[50]>0 && mp[25]==0)){
                cout << "NO" << endl;
                return;
            }
            else{
                if(mp[50]>0 && mp[25]>0){
                    mp[100]++;
                    mp[50]--;
                    mp[25]--;
                }
                else{
                    mp[25]-=3;
                }
            }
        }
        else{
            mp[25]++;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cinemaLine();
    return 0;
}
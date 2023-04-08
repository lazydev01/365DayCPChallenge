/*

    Question -> https://www.codechef.com/problems/PIPSQUIK

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n, h, y1, y2, l;
        cin >> n >> h >> y1 >> y2 >> l;
        int count = 0;
        for(int i=0; i<n; i++){
            int t1, x;
            cin >> t1 >> x;
            if(t1==1){
                if(h-y1<=x){
                    count++;
                }
                else{
                    if(l==1){
                        break;
                    }
                    count++;
                    l--;
                }
            }
            else{
                if(y2>=x){
                    count++;
                }
                else{
                    if(l==1){
                        break;
                    }
                    count++;
                    l--;
                }
            }
        }
        cout << count << endl;

    }
    return 0;
}
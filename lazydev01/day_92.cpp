/*

    Question -> https://www.codechef.com/problems/COLOUR

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

        int x, y, z;
        cin >> x >> y >> z;
        int count_two = 0;
        int count_one = 0;
        int one = 0;
        if(x>2){
            count_two++;
        }
        else if(x>1){
            count_one++;
        }
        else if(x==1){
            one++;
        }
        if(y>2){
            count_two++;
        }
        else if(y>1){
            count_one++;
        }
        else if(y==1){
            one++;
        }
        if(z>2){
            count_two++;
        }
        else if(z>1){
            count_one++;
        }
        else if(z==1){
            one++;
        }
        if(count_two == 3){
            cout << 6 << endl;
        }
        else if(count_two==2 && count_one==1){
            cout << 5 << endl;
        }
        else if(count_two==2 && one==1){
            cout << 4 << endl;
        }
        else if(one==3 || count_two==2 || (one==2 && count_two==1) || (one==2 && count_one==1)){
            cout << 3 << endl;
        }
        else if(one==2 || (one==1 && count_two==1) || (one==1 && count_one==1)){
            cout << 2 << endl;
        }
        else if(one==1 || (count_one==1) || (count_two==1)){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}
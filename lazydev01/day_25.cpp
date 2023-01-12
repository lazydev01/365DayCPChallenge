/*

Question -> https://www.codechef.com/problems/CAKE1AM

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

        int one_x1, one_y1, one_x2, one_y2;
        int two_x1, two_y1, two_x2, two_y2;
        cin >> one_x1 >> one_y1 >> one_x2 >> one_y2;
        cin >> two_x1 >> two_y1 >> two_x2 >> two_y2;
        int first_area = abs(one_x2-one_x1)*abs(one_y2 - one_y1);
        int second_area = abs(two_x2-two_x1)*abs(two_y2 - two_y1);
        one_x1 = max(one_x1, two_x1);
        one_y1 = max(one_y1, two_y1);
        one_x2 = min(one_x2, two_x2);
        one_y2 = min(one_y2, two_y2);
        int left_over_area = 0;
        if(one_x1<one_x2 && one_y1<one_y2){
            left_over_area = abs(one_x1-one_x2)*abs(one_y1-one_y2);
        }
        cout << first_area+second_area-left_over_area << endl;
    }
    return 0;
}
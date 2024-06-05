#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void shortestPathWithObstacle(){
    int t;
    cin >> t;
    while(t--){
        int x_a, y_a;
        cin >> x_a >> y_a;
        int x_b, y_b;
        cin >> x_b >> y_b;
        int x_f, y_f;
        cin >> x_f >> y_f;
        int count = 0;
        if(x_a != x_b && y_a != y_b){
            count += abs(x_b - x_a);
            count += abs(y_b - y_a);
        }
        else{
            if(x_a == x_b && x_a == x_f){
                if(min(y_a, y_b) <= y_f && y_f <= max(y_a, y_b)){
                    count+=2;   
                }
                count+=abs(y_a - y_b);
            }
            else if(y_a == y_b && y_a == y_f){
                if(min(x_a, x_b) <= x_f && x_f <= max(x_a, x_b)){
                    count+=2;   
                }
                count+=abs(x_a - x_b);
            }
            else{
                count += abs(x_a - x_b);
                count += abs(y_a - y_b);
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    shortestPathWithObstacle();
    return 0;
}
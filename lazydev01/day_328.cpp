#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void orPermutation(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        bool flag = false;
        int start = 1;
        int end = n;
        while(count!=n){
            if(!flag){
                cout << start << " ";
                start++;
            }
            else{
                cout << end << " ";
                end--;
            }
            count++;
            flag = !flag;
        }
        cout << endl;
    }
}

void savePeople(){
    int t;
    cin >> t;
    while(t--){
        int m, n, x, y;
        cin >> n >> m >> x >> y;
        int top_area = 0, left_area = 0, right_area = 0, bottom_area = 0;
        top_area = (x-1)*(m);
        left_area = (y-1)*(n);
        if(x!=n) bottom_area = (n-x)*(m);
        if(y!=m) right_area = (m-y)*(n);
        cout << max(top_area, max(left_area, max(bottom_area, right_area))) << endl;
    }
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // orPermutation();
    savePeople();
    return 0;
}

/*

7 7
6 5

0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 1 0 0
0 0 0 0 0 0 0


*/
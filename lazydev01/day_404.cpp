#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void xorry2(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int log_x = log2(x);
        bool skippedOne = false;
        int ans = 1;
        for(int i=log_x-1; i>=0; i--){
            if(x&(1<<i)){
                skippedOne = true;
            }
            else{
                if(skippedOne){
                    ans = ans * 2;
                }
            }
        }
        cout << ans << endl;
    }
}

void equalityEtiquette(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int diff = abs(a-b);
        int low = 0;
        int high = 100000;
        while(low!=high){
            int mid = (low+high)/2;
            if(((mid*(mid+1))/2) < diff){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
         if((low)*(low+1)/2 % 2 == diff%2){
            cout<<low<<endl;
        }
        else if((low+1)*(low+2)/2 % 2 == diff%2){
            cout<<low+1<<endl;
        }
        else if((low+2)*(low+3)/2 % 2 == diff%2){
            cout<<low+2<<endl;
        }
    }
}

int sumOfNums(int start, int end){
    int mod = 998244353l;
    return ((((end)*(end+1))/2)%mod) - ((((start)*(start+1))/2)%mod);
}

void spreadSpree(){
    int mod = 998244353l;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int max_n_m = max(m, n);
        int min_n_m = min(m, n);
        int ans = 0;
        if(max_n_m % 2){
            if(min_n_m <= (max_n_m/2)+1){
                ans = (sumOfNums(0, min_n_m)*((max_n_m/2)+1))%mod;
            }
            else{
                ans = (sumOfNums(min_n_m-((max_n_m/2)+1), (max_n_m/2)+1)*((max_n_m/2)+1))%mod;
            }
        }
        else{
            if(min_n_m <= (max_n_m/2)+1){
                ans += ((max_n_m/2) * sumOfNums(0, min_n_m))%mod;
                ans += (((max_n_m/2)+1) * sumOfNums(0, min_n_m))%mod;
            }
            else{
                ans += ((max_n_m/2) * sumOfNums(min_n_m-((max_n_m/2)+1), (max_n_m/2)+1))%mod;
                ans += (((max_n_m/2)+1) * sumOfNums(min_n_m-((max_n_m/2)+1), (max_n_m/2)+1))%mod;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // xorry2();
    // equalityEtiquette();
    spreadSpree();
    return 0;
}

/**

1
1 0

2
2 0

3
2 1

4
4 0

5
4 1

6
4 2
5 3

7
4 3
5 2
6 1

8
8 0

9
8 1
9 0

10
8 2
9 3
10 0

11
8 3
9 2
10 1
11 0

12
8 4
9 5
10 6
11 7

 */

/*

4 4
0

5 4
5 5
1

1 8
2 8
2 6
5 6
5 2


*/

/*

10 2

**
**
**
**
**
**
**
**
**
**

5 1
5 2
6 1
6 2

10 4

****
****
****
****
****
****
****
****
****
****

10 8

********
********
********
********
********
********
********
********
********
********

10 3
***
***
***
***
***
***
***
***
***
***


10 7
*******
*******
*******
*******
*******
*******
*******
*******
*******
*******
*******
*******

9 5
******
******
******
******
******
******
******
******
******
*/
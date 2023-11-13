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

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    orPermutation();
    return 0;
}
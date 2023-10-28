#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int power(int val, int n){
    int ans = 1;
    while(n>0){
        if(n%2==1){
            ans = ans * val;
            n--;
        }
        else{
            val = val * val;
            n = n/2;
        }
    }
    return ans;
}


void takeItEasy(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum/(double)n != sum/n){
            cout << "NO" << endl;
        }
        else{
            bool flag = false;
            int eq_num = sum/n;
            for(int i=0; i<n; i++){
                int diff = abs(arr[i]-eq_num);
                if(diff==0){
                    continue;
                }
                else if(diff %2 == 1){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    takeItEasy();
    return 0;
}
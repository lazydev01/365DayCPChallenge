#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void theRank(){
    int n;
    cin >> n;
    vector<int> sum_arr(n);
    for(int i=0; i<n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sum_arr[i] = (a+b+c+d);
    }
    int thomas_sum = sum_arr[0];
    sort(sum_arr.begin(), sum_arr.end(), greater<int>());
    for(int i=0; i<n; i++){
        if(sum_arr[i]==thomas_sum){
            cout << (i+1) << endl;
            break;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    theRank();
    return 0;
}
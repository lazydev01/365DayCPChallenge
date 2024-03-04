#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void numberOfWays(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum%3!=0){
        cout << 0 << endl;
        return;
    }
    int countsumby3 = 0;
    int count2sumby3 = 0;
    int cumuSum = 0;
    for(int i=0; i<n-1; i++){
        cumuSum+=arr[i];
        if(cumuSum==(2*(sum/3))){
            count2sumby3 += countsumby3;
        }
        if(cumuSum==(sum/3)){
            countsumby3++;
        }
    }
    cout << count2sumby3 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    numberOfWays();
    return 0;
}
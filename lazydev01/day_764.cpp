#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int sumOfDigits(int num){
    int sum = 0;
    while(num>0){
        sum += (num%10);
        num = num / 10;
    }
    return sum;
}

void vladAndASumOfSumOfDigits(){
    int t;
    cin >> t;
    vector<int> arr(200000);
    arr[0] = 1;
    for(int i=2; i<=200000; i++){
        arr[i-1] = arr[i-2] + sumOfDigits(i);
    }
    while(t--){
        int n;
        cin >> n;
        cout << arr[n-1] << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vladAndASumOfSumOfDigits();
    return 0;
}
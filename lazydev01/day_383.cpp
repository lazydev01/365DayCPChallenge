#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void flippingGame(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ones = 0;
    int maxi = 0;
    int count = 0;
    for(auto i : arr){
        if(i==1){
            ones++;
            count--;
        }
        else{
            count++;
        }
        if(count<0){
            count = 0;
        }
        if(maxi<count){
            maxi = count;
        }
    }
    if(ones==n){
        cout << ones-1 << endl;
    }
    else{
        cout << ones+maxi << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    flippingGame();
    return 0;
}
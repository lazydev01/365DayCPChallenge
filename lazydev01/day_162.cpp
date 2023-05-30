#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void buyAndSellStocks(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int mini;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i==0){
            mini = arr[i];
        }
        if(arr[i] > mini){
            ans = max(ans, arr[i]-mini);
        }
        mini = min(mini, arr[i]);
    }
    cout << ans << endl;
}

void nextPermutation(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int index = -1;
    for(int i=n-1; i>=1; i--){
        if(arr[i]>arr[i-1]){
            index = i-1;
            break;
        }
    }
    if(index==-1){
        reverse(arr.begin(), arr.end());
    }
    else{
        for(int i=n-1; i>index; i--){
            if(arr[i]>arr[index]){
                swap(arr[i], arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1, arr.end());
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // buyAndSellStocks();
    nextPermutation();
    return 0;
}
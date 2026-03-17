#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void queueProblem(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int disappointed = 0;
    int waitingTime = 0;
    for(auto i : arr){
        if(i < waitingTime){
            disappointed++;
        }
        else{
            waitingTime += i;
        }
        
    }
    cout << n - disappointed << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    queueProblem();
    return 0;
}
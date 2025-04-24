#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void basketballExercise(){
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    for(int i=1; i<n; i++){
        arr1[i] = max(arr2[i-1] + arr1[i], arr1[i-1]);
        arr2[i] = max(arr1[i-1] + arr2[i], arr2[i-1]);
    }
    cout << max(arr1[n-1], arr2[n-1]) << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    basketballExercise();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void stableGroups(){
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int cnt = 1;
    vector<int> diff;
    for(int i = 1; i < n; i++){
        if(arr[i] - (arr[i-1] + x) > 0){
            diff.push_back(arr[i] - arr[i-1]);
        }
    }
    sort(diff.begin(), diff.end());
    int grpsCombined = 0;
    for(auto i : diff){
        if(k >= ((i-1)/(x))){
            grpsCombined++;
            k-=((i-1)/(x));
        }
        else{
            break;
        }
    }
    cout << 1 + diff.size() - grpsCombined << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    stableGroups();
    return 0;
}

/*

10 4 1
10 1 6 10 1 1 6 8 6 8

1 1 1 6 6 6 8 8 10 10

5 3 2
9 1 5 1 9

1 1 5 9 9

4 4

3
1 7 

*/
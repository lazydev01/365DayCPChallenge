#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimumNumberOfPlatformsRequiredForARailway(){
    int n;
    cin >> n;
    vector<int> arrival;
    vector<int> departure;
    for(int i=0; i<n; i++){
        int arr, dep;
        cin >> arr >> dep;
        arrival.push_back(arr);
        departure.push_back(dep);
    }
    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());
    int i=0, j=1;
    int currPlatforms = 1, maxPlatforms = 1;
    while(i<n && j<n){
        if(arrival[j]<=departure[i]){
            currPlatforms++;
            j++;
        }
        else{
            currPlatforms--;
            i++;
        }
        maxPlatforms = max(maxPlatforms, currPlatforms);
    } 
    cout << maxPlatforms << endl;

}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minimumNumberOfPlatformsRequiredForARailway();
    return 0;
}
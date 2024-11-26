#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void negativesAndPositives(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        bool oddNegatives = false;
        bool hasZero = false;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            mini = min(mini, abs(arr[i]));
            ans += abs(arr[i]);
            if(arr[i]<0){
                oddNegatives = !oddNegatives;
            }
            if(arr[i]==0){
                hasZero = true;
            }
        }
        if(hasZero || !oddNegatives){
            cout << ans << endl;
        }
        else{
            cout << ans - (2 * mini) << endl;
        }
    }
}

void medianOfRowWiseSortedMatrix(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }
    int minEl = INT_MAX;
    int maxEl = INT_MIN;
    for(int i=0; i<m; i++){
        minEl = min(minEl, matrix[i][0]);
    }
    for(int i=0; i<m; i++){
        maxEl = max(maxEl, matrix[i][n-1]);
    }
    int low = minEl;
    int high = maxEl;
    int ans = -1;
    while(low<=high){
        int mid = (low + high)/2;
        int smallerOrEqual = 0;
        for(int i=0; i<m; i++){
            int l = 0;
            int r = n-1;
            int sOrE = 0;
            while(l<=r){
                int mi = (l + r)/2;
                if(matrix[i][mi]<=mid){
                    sOrE = mi+1;
                    l = mi+1;
                }
                else{
                    r = mi - 1;
                }
            }
            smallerOrEqual += sOrE;
        }
        if(smallerOrEqual >= (ceil)((n*m)/2.0)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // negativesAndPositives();
    medianOfRowWiseSortedMatrix();
    return 0;
}
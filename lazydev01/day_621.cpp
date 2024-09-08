#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void removeDuplicatesInPlaceFromSortedArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int curr = INT_MIN;
    int nextIndex = 0;
    for(int i=0; i<n; i++){
        if(curr != arr[i]){
            arr[nextIndex] = arr[i];
            nextIndex++;
        }
        curr = arr[i];
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

    removeDuplicatesInPlaceFromSortedArray();
    return 0;
}
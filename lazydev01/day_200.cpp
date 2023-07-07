#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void printSubsequence(int i, vector<int> &arr, int n, vector<int> &og){
    if(i>=n){
        for(int j=0; j<arr.size(); j++){
            cout << arr[j] << " ";
        }
        cout << endl;
        return;
    }
    printSubsequence(i+1, arr, n, og); 
    arr.push_back(og[i]); // pick
    printSubsequence(i+1, arr, n, og); 
    arr.pop_back(); // not pick
}

void printAllSubsequences(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> arr2 = {};
    printSubsequence(0, arr2, n, arr);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    printAllSubsequences();
    return 0;
}
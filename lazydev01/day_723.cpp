#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twinPermutations(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            cout << (n + 1 - arr[i]) << " ";
        }
        cout << endl;
    }
}

void maximumSumCombinations(){
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    int c;
    cin >> c;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int>ans;
    priority_queue<pair<int, pair<int, int> > > heap;
    set<pair<int, int> > mySet;
    heap.push(make_pair(arr1[n - 1] + arr2[n - 1], make_pair(n-1, n-1)));
    mySet.insert(make_pair(n - 1, n - 1));
    for (int count=0; count<c; count++) {
        pair<int, pair<int, int> > temp = heap.top();
        heap.pop();
        ans.push_back(temp.first);
        int i = temp.second.first;
        int j = temp.second.second;
        if(i-1>=0){
            int sum = arr1[i - 1] + arr2[j];
            pair<int, int> temp1 = make_pair(i - 1, j);
            if (mySet.find(temp1) == mySet.end()) {
                heap.push(make_pair(sum, temp1));
                mySet.insert(temp1);
            }
        }
        if(j-1>=0){
            int sum = arr1[i] + arr2[j - 1];
            pair<int,int>temp1 = make_pair(i, j - 1);
            if (mySet.find(temp1) == mySet.end()) {
                heap.push(make_pair(sum, temp1));
                mySet.insert(temp1);
            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // twinPermutations();
    maximumSumCombinations();
    return 0;
}
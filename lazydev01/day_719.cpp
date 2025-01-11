#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kthLargestElementInAnArray(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    priority_queue<int> heap;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        heap.push(arr[i]);
    }
    for(int i=0; i<k-1; i++){
        heap.pop();
    }
    cout << heap.top() << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kthLargestElementInAnArray();
    return 0;
}
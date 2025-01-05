#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minHeap(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> heap;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x==0){
                cin >> x;
                heap.push(x);
            }
            else{
                ans.push_back(heap.top());
                heap.pop();
            }
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minHeap();
    return 0;
}
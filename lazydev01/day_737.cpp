#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void decoding(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for(int i=0; i<n; i++){
        ans+='#';
    }
    int median = (n+1)/2 - 1;
    ans[median] = s[0];
    if(n%2==0){
        int counter = 1;
        for(int i=1; i<n; i+=2){
            if(median + counter < n){
                ans[median + counter] = s[i];
            }
            if(i + 1 < n){
                if(median - counter > -1){
                    ans[median - counter] = s[i+1];
                }
            }
            counter++;
        }
    }
    else{
        int counter = 1;
        for(int i=1; i<n; i+=2){
            if(median - counter > -1){
                ans[median - counter] = s[i];
            }
            else{
                ans[median + counter] = s[i];
            }
            if(i + 1 < n){
                if(median + counter < n){
                    ans[median + counter] = s[i+1];
                }
            }
            counter++;
        }
    }
    cout << ans << endl;
}

void mergeKSortedArrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> arrays;
        priority_queue< pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > heap;
        for(int i=0; i<n; i++){
            int m;
            cin >> m;
            vector<int> arr(m);
            for(int j=0; j<m; j++){
                cin >> arr[j];
            }
            heap.push(make_pair(arr[0], make_pair(0, i)));
            arrays.push_back(arr);
        }
        vector<int> ans;
        while(!heap.empty()){
            pair<int, pair<int, int>> p = heap.top();
            pair<int, int> meta = p.second;
            int element = p.first;
            int elIndex = meta.first;
            int arrIndex = meta.second;
            ans.push_back(element);
            heap.pop();
            if(elIndex < arrays[arrIndex].size()-1){
                heap.push(make_pair(arrays[arrIndex][elIndex+1], make_pair(elIndex+1, arrIndex)));
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

    // decoding();
    mergeKSortedArrays();
    return 0;
}

// abcdef
// ecabd#
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void xAxis(){
    int t;
    cin >> t;
    while(t--){
        vector<int> arr(3);
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]);
        cout << ans << endl;
    }
}

bool sortAccordingToFirstEl(pair<int, int> &first, pair<int, int> &second){
    if(first.first < second.first) return true;
    else if(first.first == second.first) return first.second < second.second;
    return false;
}

void mergeOverlappingSubIntervals(){
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        vp[i] = make_pair(a, b);
    }
    sort(vp.begin(), vp.end(), sortAccordingToFirstEl);
    int ind = 1;
    int start = vp[0].first;
    int end = vp[0].second;
    vector<pair<int, int>> ans;
    while(ind < n){
        if(vp[ind].first <= end){
            start = min(start, vp[ind].first);
            end = max(end, vp[ind].second);
        }
        else{
            ans.push_back(make_pair(start, end));
            start = vp[ind].first;
            end = vp[ind].second;
        }
        ind++;
    }
    ans.push_back(make_pair(start, end));
    for(int i=0; i<ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // xAxis();
    mergeOverlappingSubIntervals();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void avtoBus(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==1 || n<4){
            cout << -1 << endl;
            continue;
        }
        int min = n/6;
        if(n%6!=0) min++;
        int max = n/4;
        cout << min << " " << max << endl;
    }
}

int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> s;
        int n = heights.size();
        vector<int> pse(n);
        vector<int> nse(n);
        for(int i=0; i<n; i++){
            while(!s.empty() && s.top().first >= heights[i]){
                s.pop();
            }
            if(s.empty()){
                pse[i] = -1;
            }
            else{
                pse[i] = s.top().second;
            }
            s.push(make_pair(heights[i], i));
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && s.top().first >= heights[i]){
                s.pop();
            }
            if(s.empty()){
                nse[i] = n;
            }
            else{
                nse[i] = s.top().second;
            }
            s.push(make_pair(heights[i], i));
        }
        int maxArea = 0;
        for(int i=0; i<n; i++){
            maxArea = max(maxArea, heights[i] * (nse[i] - pse[i] - 1));
        }
        return maxArea;
    }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    avtoBus();
    return 0;
}
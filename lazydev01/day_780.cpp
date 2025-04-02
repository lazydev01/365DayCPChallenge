#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void ambitiousKid(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int minEl = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        minEl = min(minEl, abs(arr[i]));
    }
    cout << minEl << endl;
}

void nearestSmallerElement(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    stack<int> s;
    vector<int> ans;
    for(int i=0; i<n; i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // ambitiousKid();
    nearestSmallerElement();
    return 0;
}
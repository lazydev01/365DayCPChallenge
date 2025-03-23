#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void nextGreaterElement(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int>arr1(n1), arr2(n2);
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }
    map<int, int> nge;
    stack<int> s;
    for(int i=n1-1; i>=0; i--){
        while(!s.empty() && s.top() < arr1[i]){
            s.pop();
        }
        if(s.empty()){
            nge[arr1[i]] = -1;
            
        }
        else{
            nge[arr1[i]] = s.top();
        }
        s.push(arr1[i]);
    }
    vector<int> ans;
    for(auto i : arr2){
        ans.push_back(nge[i]);
    }
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    nextGreaterElement();
    return 0;
}
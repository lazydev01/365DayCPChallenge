#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void majorityElementNBy3Times(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int el1, el2;
    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<n; i++){
        if(cnt1==0 && el2!=arr[i]){
            el1 = arr[i];
            cnt1++;
        }
        else if(cnt2==0 && el1!=arr[i]){
            el2 = arr[i];
            cnt2++; 
        }
        else if(arr[i]==el1){
            cnt1++;
        }
        else if(arr[i]==el2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    for(int i=0; i<n; i++){
        cnt1 = 0, cnt2 = 0;
        if(el1==arr[i]){
            cnt1++;
        }
        else if(el2==arr[i]){
            cnt2++;
        }
    }
    if(cnt1>n/3){
        ans.push_back(el1);
    }
    if(cnt2>n/3){
        ans.push_back(el2);
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void threeSum(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(i!=0 && arr[i]==arr[i-1]){
            continue;
        }
        int first = i;
        int second = i+1;
        int third = n-1;
        while(second < third){
            int sum = arr[first] + arr[second] + arr[third];
            if(sum==0){
                vector<int> temp;
                temp.push_back(arr[first]);
                temp.push_back(arr[second]);
                temp.push_back(arr[third]);
                ans.push_back(temp);
                second++;
                third--;
                while(second < third && arr[second]==arr[second-1]) second++;
                while(second < third && arr[third]==arr[third+1]) third--;
            }
            else if(sum < 0){
                second++;
            }
            else{
                third--;
            }
        }
    }
    for(vector<int> i : ans){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    threeSum();
    return 0;
}
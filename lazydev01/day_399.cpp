#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"


void threePairwiseMaximums(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> arr;
        arr.push_back(x);
        arr.push_back(y);
        arr.push_back(z);
        int maxi = *max_element(arr.begin(), arr.end());
        int mini = *min_element(arr.begin(), arr.end());
        int count_maxi = 0;
        for(auto i : arr){
            if(i==maxi){
                count_maxi++;
            }
        }
        if(count_maxi>=2){
            cout << "YES" << endl;
            cout << maxi << " " << mini << " " << mini << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    threePairwiseMaximums();
    return 0;
}
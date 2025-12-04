#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void doraAndSearch(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            s.insert(arr[i]);
        }
        int left = 0, right = n-1;
        bool found = false;
        while(left < right){
            if(arr[left] == *s.begin() || arr[left] == *s.rbegin()){
                s.erase(arr[left]);
                left++;
            }
            else if(arr[right] == *s.begin() || arr[right] == *s.rbegin()){
                s.erase(arr[right]);
                right--;
            }
            else{
                found = true;
                cout << left + 1 << " " << right + 1 << endl;
                break;
            }
        }
        if(!found){
            cout << -1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    doraAndSearch();
    return 0;
}
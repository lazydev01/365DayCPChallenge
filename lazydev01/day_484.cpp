#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void similarPairs(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int odd_count = 0, even_count = 0;
        for(auto i : arr){
            if(i%2){
                odd_count++;
            }
            else{
                even_count++;
            }
        }
        if(odd_count%2==0 && even_count%2==0){
            cout << "YES" << endl;
        }
        else if(odd_count%2==1 && even_count%2==1){
            bool flag = false;
            sort(arr.begin(), arr.end());
            for(int i=0; i<n-1; i++){
                if(abs(arr[i]-arr[i+1])==1){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
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

    similarPairs();
    return 0;
}
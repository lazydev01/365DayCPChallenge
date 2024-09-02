#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeItBeautiful(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool oneElement = true;
        for(int i=1; i<n; i++){
            if(arr[i]!=arr[i-1]){
                oneElement = false;
                break;
            }
        }
        if(oneElement){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            sort(arr.begin(), arr.end(), greater<int>());
            int index = 0;
            for(int i=0; i<n-1; i++){
                if(arr[i]!=arr[i+1]){
                    index = i;
                }
            }
            for(int i=index; i<n; i++){
                cout << arr[i] << " ";
            }
            for(int i=0; i<index; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeItBeautiful();
    return 0;
}
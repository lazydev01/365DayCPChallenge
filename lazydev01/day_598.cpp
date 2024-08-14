#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void oneAndTwo(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int count_two = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==2) count_two++;
        }
        if(count_two%2){
            cout << -1 << endl;
            continue;
        }
        int curr_count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==2){
                curr_count++;
            }
            if(curr_count == count_two/2){
                cout << i+1 << endl;
                break;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    oneAndTwo();
    return 0;
}
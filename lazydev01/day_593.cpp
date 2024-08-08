#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void goodPrefixes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int max_element = 0;
        int sum = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            max_element = max(max_element, arr[i]);
            sum += arr[i];
            if(sum - max_element == max_element){
                count++;
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    goodPrefixes();
    return 0;
}
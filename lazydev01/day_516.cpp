#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void juicer(){
    int n, b, d;
    cin >> n >> b >> d;
    vector<int> oranges(n);
    for(int i=0; i<n; i++){
        cin >> oranges[i];
    }
    int ans = 0;
    int sum = 0;
    for(auto i : oranges){
        if(i<=b){
            sum+=i;
            if(sum>d){
                ans++;
                sum=0;
            }
        }
    }
    cout << ans << endl;
}

void makeEqual(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        int avg = sum/n;
        int checker = 0;
        for(int i=n-1; i>=0; i--){
            if(checker>0){
                break;
            }
            checker+=(arr[i]-avg);
        }
        if(checker>0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // juicer();
    makeEqual();
    return 0;
}
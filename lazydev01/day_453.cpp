#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fakeCertificate(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int max_zero = 0;
        int zero_count = 0;
        int one_count = 0;
        for(auto i : s){
            if(i=='1'){
                one_count++;
                zero_count = 0;
            }
            else{
                zero_count++;
            }
            max_zero = max(max_zero, zero_count);
        }
        cout << one_count+max_zero << endl;
    }
}

void tableStrength(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> weights(n);
        for(int i = 0; i < n; i++){
            cin >> weights[i];
        }
        sort(weights.begin(), weights.end(), greater<int>());
        int max_strength = 0;
        for(int i=0; i<n; i++){
            max_strength = max(max_strength, (weights[i]*(i+1)));
        }
        cout << max_strength << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // fakeCertificate();
    tableStrength();
    return 0;
}
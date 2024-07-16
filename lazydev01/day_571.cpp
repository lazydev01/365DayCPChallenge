#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void onlyPluses(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        for(int i=0; i<5; i++){
            if(a<=b && a<=c){
                a++;
            }
            else if(b<=a && b<=c){
                b++;
            }
            else{
                c++;
            }
        }
        cout << a*b*c << endl;
    }
}

void majorityElementN3(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto i : mp){
        if(i.second > (n/3)){
            cout << i.first << " ";
        }
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // onlyPluses();
    majorityElementN3();
    return 0;
}
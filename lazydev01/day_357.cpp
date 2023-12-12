#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void airHockey(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << 7 - max(a, b) << endl;
    }
}

void prefixing(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr_a(n);
        for(int i=0; i<n; i++){
            cin >> arr_a[i];
        }
        vector<int> arr_b(n);
        map<int, int> mp_a;
        map<int, int> mp_b;
        for(auto i : arr_a){
            mp_a[i]++;
        }
        int largest = *max_element(arr_a.begin(), arr_a.end());
        int ptr = 0;
        for(int i=0; i<n; i++){
            int curr = arr_a[i];
            if(mp_b[curr]>0){
                arr_b[i] = largest;
                mp_b[largest]++;
                mp_a[largest]--;
            }
            else{
                arr_b[i] = curr;
                mp_b[curr]++;
                mp_a[curr]--;
            }
        }
        for(auto i : arr_b){
            cout << i << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // airHockey();
    prefixing();
    return 0;
}
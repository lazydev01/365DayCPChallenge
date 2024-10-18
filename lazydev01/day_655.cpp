#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

vector<bool> convertToBinaryArray(int n){
    vector<bool> binArr;
    while(n>0){
        binArr.push_back(n%2!=0);
        n/=2;
    }
    return binArr;
}

void xorwice(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        vector<bool> binA = convertToBinaryArray(a);
        vector<bool> binB = convertToBinaryArray(b);
        int x = 0;
        int mul = 1;
        for(int i=0; i<min(binA.size(), binB.size()); i++){
            if(binA[i] && binB[i]){
                x += (mul);
            }
            mul*=2;
        }
        cout << (a^x) + (b^x) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    xorwice();
    return 0;
}
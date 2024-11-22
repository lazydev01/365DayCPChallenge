#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimumProduct(){
    int t;
    cin >> t;
    while(t--){
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        int tempA = a;
        int tempB = b;
        int tempN = n;
        int prodA, prodB;
        int minA = min(tempN, (tempA-x));
        tempA-=minA;
        tempN-=minA;
        int minB = min(tempN, (tempB-y));
        tempB-=minB;
        tempN-=minB;
        prodA = tempA * tempB;
        tempA = a;
        tempB = b;
        tempN = n;
        minB = min(tempN, (tempB-y));
        tempB-=minB;
        tempN-=minB;
        minA = min(tempN, (tempA-x));
        tempA-=minA;
        tempN-=minA;
        prodB = tempA * tempB;
        cout << min(prodA, prodB) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minimumProduct();
    return 0;
}
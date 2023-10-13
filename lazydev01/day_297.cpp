#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fearOfTheDark(){
    
    int t;
    cin >> t;
    while(t--){
        int p1, p2;
        cin >> p1 >> p2;
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        double ap = sqrt(((a1-p1)*(a1-p1)) + ((a2-p2)*(a2-p2))); 
        double bp = sqrt(((b1-p1)*(b1-p1)) + ((b2-p2)*(b2-p2))); 
        double ao = sqrt(((a1)*(a1)) + ((a2)*(a2))); 
        double bo = sqrt(((b1)*(b1)) + ((b2)*(b2)));
        double ab = sqrt(((a1-b1)*(a1-b1)) + ((a2-b2)*(a2-b2)));
        double coveredByA = max(ap, ao);
        double coveredByB = max(bp, bo);
        double oCoveredByA = max(max(ab/2.0, ao), max(ab/2.0, bp));
        double oCoveredByB = max(max(ab/2.0, bo), max(ab/2.0, ap));
        cout << setprecision(8) << min(coveredByA, min(coveredByB, min(oCoveredByA, oCoveredByB))) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fearOfTheDark();
    return 0;
}
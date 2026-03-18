#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sequenceWithDigits(){
    int t;
    cin >> t;
    while(t--){
        int a, k;
        cin >> a >> k;
        int minDigit = INT_MAX, maxDigit = INT_MIN;
        for(int i = 1; i < k; i++){
            minDigit = INT_MAX;
            maxDigit = INT_MIN;
            int tempA = a;
            while(tempA > 0){
                minDigit = min(minDigit, tempA%10);
                maxDigit = max(maxDigit, tempA%10);
                tempA = tempA / 10;
            }
            if(minDigit == 0){
                break;
            }
            a = a + (minDigit * maxDigit);
        }
        cout << a << endl;
    }    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sequenceWithDigits();
    return 0;
}
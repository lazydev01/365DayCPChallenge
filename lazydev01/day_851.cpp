#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void ezzatAndTwoSubsequences(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxElement = INT_MIN;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            maxElement = max(maxElement, arr[i]);
            sum+=arr[i];
        }
        double ans = (maxElement + ((sum - maxElement) / ((n - 1) * 1.0)));
        cout << fixed << setprecision(9) << ans << endl;
    }
}

class Solution {
public:
    int myAtoi(string s) {
        bool isStart = true;
        string ansInt = "";
        bool hasNumStarted = false;
        bool isNumberNegative = false;
        bool nonZeroEncountered = false;
        for(auto i : s){
            if(i == ' ' && isStart){

            }
            else if(!hasNumStarted && (i == '+' || i == '-')){
                if(i == '-') isNumberNegative = true;
                isStart = false;
                hasNumStarted = true;
            }
            else if(i - '0' >= 0 && i - '0' <= 9){
                if(i - '0' != 0){
                    nonZeroEncountered = true;
                }
                if(nonZeroEncountered){
                    ansInt += i;
                }
                isStart = false;
                hasNumStarted = true;
            }
            else{
                break;
            }
        }
        if(ansInt.size() > 10){
            if(isNumberNegative) return INT_MIN;
            return INT_MAX;
        }
        long long ans = 0;
        for(int i = 0; i < ansInt.size(); i++){
            ans += (ansInt[i] - '0') * (pow(10, ansInt.size() - i - 1));
        }
        if(isNumberNegative) return (ans * -1) <= INT_MIN ? INT_MIN : (ans * -1);
        return ans >= INT_MAX ? INT_MAX : ans;
    }
};

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ezzatAndTwoSubsequences();
    return 0;
}
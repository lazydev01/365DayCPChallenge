#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcFirstBIndex(int low, int high, int target){
    int ans = 0;
    while(low <= high){
        int mid = (low + high)/2;
        int calc = (mid * (mid + 1))/2;
        if(target<=calc){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

void kthBeautifulString(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int firstB = calcFirstBIndex(0, n, k);
        string ans = "";
        for(int i=0; i<n; i++){
            ans+='a';
        }
        ans.replace(n-1-firstB, 1, 1, 'b');
        int secondB = (n - (k - ((firstB*(firstB - 1)/2))));
        ans.replace(secondB, 1, 1, 'b');
        cout << ans << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kthBeautifulString();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void shrink(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 1 << " ";
        for(int i = 1; i < n-1; i++){
            cout << i+2 << " ";
        }
        cout << 2 << endl;


    }
}

class Solution {
public:

    static bool isSubstring(string a, string b){
        int n = a.size();
        int m = b.size();
        for(int i = 0; i <= n-m; i++){
            int j;
            for(j = 0; j < m; j++){
                if(a[i+j] != b[j]){
                    break;
                }
            }
            if(j == m) return true;
        }
        return 0;
    }
    int repeatedStringMatch(string a, string b) {
        int n = a.size();
        int m = b.size();
        int ans = (ceil)(m / (n * 1.0));
        string new_a = "";
        for(int i = 0; i < ans; i++){
            new_a += a;
        }
        if(isSubstring(new_a, b)) return ans;
        if(isSubstring(new_a + a, b)) return ans + 1;
        return -1;
    }
};

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    shrink();
    return 0;
}
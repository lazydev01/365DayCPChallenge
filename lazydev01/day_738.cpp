#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int findSum(string s){
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        ans += (s[i]-'0');
    }
    return ans;
}

void perfectNumber(){
    int n;
    cin >> n;
    int ans = 10;
    while(n!=0){
        ans+=9;
        if(findSum(to_string(ans)) == 10){
            n--;
        }
    }
    cout << ans << endl;

}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    perfectNumber();
    return 0;
}

/*

19
28
37
46
55
64
73
82
91
109
118
127
136
145
154
163
172
181
190
208
217
226
235
244
253
262
271
280
307
316



 */
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void followingTheString(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, queue<char>> mp;
        for(int i=0; i<n; i++) cin >> arr[i];
        for(char i='a'; i<='z'; i++){
            mp[0].push(i);
        }
        string ans = "";
        for(int i=0; i<arr.size(); i++){
            ans+=mp[arr[i]].front();
            mp[arr[i]+1].push(mp[arr[i]].front());
            mp[arr[i]].pop();
        }
        cout << ans << endl;
    }
}

void lovelyPalindromes(){
    string n;
    cin >> n;
    string og = n;
    reverse(n.begin(), n.end());
    og+=n;
    cout << og << endl;
}

void digitsSum(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = n/10;
        if(n%10==9){
            ans++;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // followingTheString();
    // lovelyPalindromes();
    digitsSum();
    return 0;
}
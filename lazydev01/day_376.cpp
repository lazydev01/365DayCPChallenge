#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void loveStory(){
    int t;
    cin >> t;

    while (t--)
    {

        string str;
        cin >> str;
        string c_str = "codeforces";
        int count = 0;
        for(int i=0; i<10; i++){
            if(c_str[i] != str[i])count++;
        }
        cout << count << endl;

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    loveStory();
    return 0;
}

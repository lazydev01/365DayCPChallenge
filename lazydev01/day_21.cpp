#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        string str;
        cin >> str;
        int index = 0;
        vector<int> arr; 
        while ((index = str.find("party", index)) != string::npos) {
            arr.push_back(index);
            index+=5;
        }
        for(int i=0; i<arr.size(); i++){
            str.replace(arr[i], 5, "pawri");
        }
        cout << str << endl;
    }
    return 0;
}
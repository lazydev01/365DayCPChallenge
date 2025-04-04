#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findTheArray(){
    int t;
    cin >> t;
    vector<int> arr;
    int i=0;
    int toAdd = 1;
    while(i<=5000){
        i += toAdd;
        arr.push_back(i);
        toAdd += 2;
    }
    while(t--){
        int n;
        cin >> n;
        int index = lower_bound(arr.begin(), arr.end(), n) - arr.begin();
        cout << index+1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    findTheArray();
    return 0;
}

/*

1 -> [1]
2 -> [1, 1]
3 -> [1, 2]
4 -> [1, 3]
5 -> [1, 2, 2]
6 -> [1, 2, 3]
7 -> [1, 2, 4]
8 -> [1, 3, 4]
9 -> [1, 3, 5]




*/
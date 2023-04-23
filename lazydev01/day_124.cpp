/*

    Question -> https://www.codechef.com/problems/RRSUM

*/
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

    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    map<int, int> map;
    bool increment = true;
    int count = 0;
    int start = n+2;
    int end = 3*n;
    for(int i=0; i<m; i++){
        cin >> arr[i];
        if(arr[i]<=((2*n)+1) && arr[i]>n+1){
            cout << (arr[i])-(n+1) << endl;
        }
        else if(arr[i]>((n*2)+1) && arr[i]<=3*n){
            cout << (n-(arr[i]-((n*2))))+1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}

/*

1 2 3 4
5 6 7 8
6 7 7 8 8 8 9 9 9 9 10 10 10 11 11 12

1 2 3
4 5 6
5 6 6 7 7 7 8 8 9

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void loveTriangle(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int first, second, third;
    vector<bool> visited(n, false);
    bool found = false;
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            first = arr[i];
            second = arr[first - 1];
            third = arr[second - 1];
            if(i+1 == third){
                found = true;
                break;
            }
        }
    }
    if(found){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    loveTriangle();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void contrastValue(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int dir = 0;
        int peaks = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] > arr[i-1] && dir != 1){
                dir = 1;
                peaks++;
            }
            else if(arr[i] < arr[i-1] && dir != -1){
                dir = -1;
                peaks++;
            }
        }
        cout << peaks + 1 << endl;
    }
}

int32_t main()
{
    contrastValue();
    return 0;
}

/*

7
5 4 2 1 0 0 4

5 - 4 + 4 - 2 + 2 - 1 + 1 - 0 + 0 - 0 + 0 - 4 

1 + 2 + 1 + 1 + 0 + 4


1 9 2 8 3 7 4 6 5

8 + 7 + 6 + 5 + 4 + 3 + 2 + 1

1 2 3 1

1 + 1 + 2

*/
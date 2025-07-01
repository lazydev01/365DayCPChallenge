#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeItZero(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if(n%2){
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else{
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
    }
}

int celebrity(vector<vector<int> >& mat) {
    // code here
    int n = mat.size();
    int top = 0;
    int down = n - 1;
    while (top < down) {
        if (mat[top][down] == 1) {
            top++;
        } else if (mat[down][top] == 1) {
            down--;
        } else {
            top++;
            down--;
        }
    }
    if (top > down) return -1;
    for (int i = 0; i < n; i++) {
        if (i != top && !(mat[top][i] == 0 && mat[i][top] == 1)) {
            return -1;
        }
    }
    return top;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeItZero();
    return 0;
}
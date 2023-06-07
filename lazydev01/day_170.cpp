#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

//Given row number and column number find value of pascal triangle at that row and column
void ncr(){
    int r, c;
    cin >> r >> c;
    int ans = 1;
    r--;
    c--;
    for(int i=0; i<c; i++){
        ans = ans*(r-i);
        ans = ans/(i+1);
    }
    cout << ans << endl;
}

// Given the row Number, print that row according to pascal triangle
void printRow(){
    int r;
    cin >> r;
    int ans = 1;
    vector<int> arr(r);
    arr[0] = ans;
    for(int i=1; i<r; i++){
        ans = ans * (r-i);
        ans = ans / (i);
        arr[i] = ans;
    }
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Given row number print the entire Pascal Triangle

vector<int> generateRow(int row){
    vector<int> ans;
    int result = 1;
    ans.push_back(result);
    for(int i=1; i<row; i++){
        result = result * (row-i);
        result = result / i;
        ans.push_back(result);
    }
    return ans;
}

void printPascalTriangle(){
    int r;
    cin >> r;
    vector<vector<int>> ans;
    for(int i=1; i<=r; i++){
        ans.push_back(generateRow(i));
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // ncr();
    // printRow();
    printPascalTriangle();
    return 0;
}
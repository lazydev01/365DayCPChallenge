#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findAndReplace(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[s[i]].push_back(i);
        }
        bool flag = false;
        for(auto i : mp){
            bool isOdd = false;
            bool isEven = false;
            for(int j : i.second){
                if(j%2){
                    isOdd = true;
                }
                else{
                    isEven = true;
                }
                if(isOdd && isEven){
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

void searchInASorted2DMatrix(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    int target;
    cin >> target;
    int row = -1;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(mat[i][0] == target){
            flag = true;
            break;
        }
        if(target > mat[i][0]){
            row = i;
        }
        else{
            break;
        }
    }
    if(flag){
        cout << flag << endl;
        return;
    }
    int ind = binary_search(mat[row].begin(), mat[row].end(), target);
    if(ind){
        cout << true << endl;
    }
    else{
        cout << false << endl;
    }
}

void searchInASorted2DMatrixOptimal(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    int target;
    cin >> target;
    int low = 0;
    int high = (n*m - 1);
    bool flag = false;
    while(low<=high){
        int mid = (low + high) / 2;
        int row = mid/m;
        int col = mid%m;
        if(mat[row][col] == target){
            flag = true;
            break;
        }
        else if(mat[row][col] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << flag << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // findAndReplace();
    // searchInASorted2DMatrix();
    searchInASorted2DMatrixOptimal();
    return 0;
}
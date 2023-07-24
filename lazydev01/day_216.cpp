#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void addPermutation(int index,  vector<int> &arr, vector<vector<int>> &ans){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index; i<arr.size(); i++){
        swap(arr[i], arr[index]);
        addPermutation(index+1, arr, ans);
        swap(arr[i], arr[index]);
    }
}

void printPermutationOfStringOrArrayWithNoExtraSpace(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<vector<int>> ans;
    addPermutation(0, arr, ans);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}




// Codeforces Round 887 (Div. 2)

/*

    1 8 13   
    2 9 12
    3 10 11
    4 11 10

    1 8 14
    2 9 13
    3 10 12
    4 11 11

*
**/ 

void problemA(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int minDiff = INT_MAX;
        for(int i=1; i<n; i++){
            minDiff = min(minDiff, arr[i]-arr[i-1]);
        }
        if(minDiff<0){
            cout << 0 << endl;
        }
        else{
            cout << (minDiff/2) + 1 << endl;
        }
    }
}

void problemB(){

    vector<int> fibb;
    fibb.push_back(0);
    fibb.push_back(1);
    int ind = 1;
    while(fibb[ind]<=2e5){
        fibb.push_back(fibb[ind] + fibb[ind-1]);
        ind++;
    }

    int t;
    cin >> t;
    cout << t << endl;
    while(t!=0){
        int n, k;
        cin >> n >> k;
        cout << n << k << endl;
        if(n<fibb[k-1]){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
        t--;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // printPermutationOfStringOrArrayWithNoExtraSpace();
    // problemA();
    problemB();

    return 0;
}
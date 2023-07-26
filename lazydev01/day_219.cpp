#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool isSafe(int node, int color[], bool graph[101][101], int N, int i){
    for(int k=0; k<N; k++){
        if(k!=node && graph[k][node]==1 && color[k]==i){
            return false;
        }
    }
    return true;
}

bool solve(int node, int color[], int m, int N, bool graph[101][101]){
    if(node==N){
        return true;
    }
    for(int i=1; i<=m; i++){
        if(isSafe(node, color, graph, N, i)){
            color[node] = i;
            if(solve(node+1, color, m, N, graph)) return true;
            color[node] = 0;
        }
    }
}

bool mColoring(bool graph[101][101], int m, int N){
    int color[N] = {0};
    if(solve(0, color, m, N, graph)){
        return true;
    }
    return false;
}

bool checkIfPalindrome(int i, int j, string s){
    while(i<=j){
        if(s[i++]!=s[j--]){
            return false;
        }
    }
    return true;
}

void solve(int i, int n, string s,vector<string> temp, vector<vector<string>> &ans){
    if(i==n){
        ans.push_back(temp);
        return;
    }
    for(int j=i; j<n; j++){
        if(checkIfPalindrome(i, j, s)){
            temp.push_back(s.substr(i, j-i+1));
            solve(j+1, n, s, temp, ans);
            temp.pop_back();
        }
    }
}

void palindromePartitioning(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<string>> ans;
    vector<string> temp;
    solve(0, n, s, temp, ans);
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

    
    return 0;
}
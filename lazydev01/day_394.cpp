#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int ans = 0;

void dfs(int node, int cons, int m, vector<bool> &cats, vector<bool> &visit, vector<vector<int>> &adj){
    if(cats[node]) cons++;
    else cons = 0;
    if(cons>m) return;
    visit[node] = true;
    bool isLeaf = true;
    for(int child : adj[node]){
        if(!visit[child]){
            dfs(child, cons, m, cats, visit, adj);
            isLeaf = false;
        }
    }
    if(isLeaf) ans++;
}

void kefaAndPark(){
    int n, m;
    cin >> n >> m;
    vector<bool> cats(n);
    vector<bool> visit(n);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(temp==1){
            cats[i] = true;
        }
        else{
            cats[i] = false;
        }
    }
    vector<vector<int>> adj(n);
    for(int i=0; i<n-1; i++){
        int a, b;
        cin >> a >> b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0, 0, m, cats, visit, adj);
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kefaAndPark();
    return 0;
}
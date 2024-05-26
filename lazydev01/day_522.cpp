#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Took help from ChatGPT to write this code
void djikstra(){
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adjList(n+1);
    for(int i = 0; i < m; i++){
        int a, b, d;
        cin >> a >> b >> d;
        adjList[a].push_back(make_pair(b, d));
        adjList[b].push_back(make_pair(a, d));
    }
    vector<int> dist(n+1, LONG_LONG_MAX);
    dist[1] = 0;
    vector<int> parent(n+1, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
    pq.push(make_pair(0, 1));

    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if(d>dist[u]){
            continue;
        }
        for(pair<int, int> edge : adjList[u]){
            int node = edge.first;
            int distance = edge.second;

            if(dist[u] + distance < dist[node]){
                dist[node] = dist[u] + distance;
                pq.push(make_pair(dist[node], node));
                parent[node] = u;
            }
        }
    }
    if(dist[n]==LONG_LONG_MAX){
        cout << -1 << endl;
        return;
    }
    stack<int> path;
    for(int v = n; v!=-1; v = parent[v]){
        path.push(v);
    }

    while(!path.empty()){
        cout << path.top() << " ";
        path.pop();
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    djikstra();
    return 0;
}
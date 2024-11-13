#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void longLong(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int maxSum = 0;
        int minOperations = 0;
        bool isPositive = true;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                maxSum += arr[i];
                if(!isPositive){
                    minOperations++;
                    isPositive = true;
                }
            }
            else{
                maxSum += (arr[i] * -1);
                if(arr[i]<0){
                    isPositive = false;
                }
            }
        }
        if(!isPositive){
            minOperations++;
        }
        cout << maxSum << " " << minOperations << endl;
    }
}

bool canColor(int vertex, map<int, vector<int>> &mp, map<int, int> &colorMap, int v, int m){
    if(vertex==v+1){
        return true;
    }
    for(int i=1; i<=m; i++){
        bool hasColoredNeighbor = false;
        for(int j=0; j<mp[vertex].size(); j++){
            if(colorMap[mp[vertex][j]]==i){
                hasColoredNeighbor = true;
            }
        }
        if(!hasColoredNeighbor){
            colorMap[vertex] = i;
            if(canColor(vertex+1, mp, colorMap, v, m)) return true;
            colorMap[vertex] = 0;
        }
    }
    return false;
}

void mColoring(){
    int v, m, e;
    cin >> v >> m >> e;
    vector<pair<int, int>> graph; 
    for(int i=0; i<e; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph.push_back(make_pair(v1+1, v2+1));
    }
    map<int, vector<int>> mp;
    for(auto i : graph){
        mp[i.first].push_back(i.second);
        mp[i.second].push_back(i.first);
    }
    map<int, int> colorMap;
    if(canColor(1, mp, colorMap, v, m)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // longLong();
    mColoring();
    return 0;
}
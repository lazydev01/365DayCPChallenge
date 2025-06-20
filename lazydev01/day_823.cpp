#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void winner(){
    int n;
    cin >> n;
    vector<pair<string, int>> scores;
    map<string, int> mp;
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        int score;
        cin >> score;
        mp[s]+=score;
        scores.push_back(make_pair(s, score));
    }
    int maxEl = 0;
    vector<string> maxPlayers;
    for(auto i : mp){
        maxEl = max(maxEl, i.second);
    }
    for(auto i : mp){
        if(i.second == maxEl){
            maxPlayers.push_back(i.first);
        }
    }
    if(maxPlayers.size() == 1){
        cout << maxPlayers[0] << endl;
    }
    else{
        map<string, int> maxScoreMap;
        bool found = false;
        for(auto i : scores){
            maxScoreMap[i.first]+=i.second;
            for(string player: maxPlayers){
                if(maxScoreMap[player]>=maxEl){
                    cout << player << endl;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    winner();
    return 0;
}
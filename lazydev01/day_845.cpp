#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void forked(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        int count = 0;
        vector<pair<int, int>> knightPositions;
        int xDirections[] = {1, -1, 1, -1};
        int yDirections[] = {1, -1, -1, 1};
        for(int i = 0; i < 4; i++){
            knightPositions.push_back(make_pair(xk + (a * xDirections[i]), yk + (b * yDirections[i])));
            if(a != b){
                knightPositions.push_back(make_pair(xk + (b * xDirections[i]), yk + (a * yDirections[i])));
            }
        }
        for(int i = 0; i < knightPositions.size(); i++){
            for(int j = 0; j < 4; j++){
                int newQueenX = knightPositions[i].first + (a * xDirections[j]);
                int newQueenY = knightPositions[i].second + (b * yDirections[j]);
                if(newQueenX == xq && newQueenY == yq) count++;
                if(a != b){
                    newQueenX = knightPositions[i].first + (b * xDirections[j]);
                    newQueenY = knightPositions[i].second + (a * yDirections[j]);
                    if(newQueenX == xq && newQueenY == yq) count++;
                }
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    forked();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void twoTeamsComposing(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        for(auto i : arr){
            mp[i]++;
        }
        int team_one_size = 0;
        int team_two_size = 0;
        for(auto i : mp){
            team_one_size =  max(team_one_size, i.second);
        }
        team_two_size = mp.size() - 1;
        if(team_one_size>team_two_size+1){
            cout << team_two_size + 1 << endl;
        }
        else{
            cout << min(team_one_size, team_two_size) << endl;
        }
    }
}

int32_t main(){
    twoTeamsComposing();
    return 0;
}
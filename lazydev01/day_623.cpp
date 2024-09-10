#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int timeInMinutes(int hour, int minutes){
    return hour*60 + minutes;
}

pair<int, int> calcSleepDuration(int totalMinutes){
    int hour = totalMinutes/60;
    int minutes = totalMinutes % 60;
    return {hour, minutes};
}

void everyoneLovesToSleep(){
    int t;
    cin >> t;
    while(t--){
        int n, H, M;
        cin >> n >> H >> M;
        int sleepTime = timeInMinutes(H, M);
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            int h, m;
            cin >> h >> m;
            int alarmTime = timeInMinutes(h, m);
            if(alarmTime<sleepTime){
                alarmTime+=(24*60);
            }
            ans = min(ans, alarmTime-sleepTime);
        }
        pair<int, int> sleepDuration = calcSleepDuration(ans);
        cout << sleepDuration.first << " " << sleepDuration.second << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    everyoneLovesToSleep();
    return 0;
}
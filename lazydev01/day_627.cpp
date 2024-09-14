#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

struct meeting{
    int startTime;
    int endTime;
    int meetingNo;

    meeting(){}
    meeting(int startTime, int endTime, int meetingNo) : startTime(startTime), endTime(endTime), meetingNo(meetingNo) {}
};

bool sortMeetingsBasedOnEndTime(meeting& m1, meeting& m2){
    if(m1.endTime <= m2.endTime) return true;
    return false;
}

void nMeetingsInOneRoom(){
    int n;
    cin >> n;
    vector<meeting> arr(n);
    for(int i = 0; i < n; i++){
        int startTime, endTime;
        cin >> startTime >> endTime;
        arr[i].startTime = startTime;
        arr[i].endTime = endTime;;
        arr[i].meetingNo = i+1;
    }
    sort(arr.begin(), arr.end(), sortMeetingsBasedOnEndTime);
    int limit = arr[0].endTime;
    int meetings = 1;
    for(int i=1; i<n; i++){
        if(arr[i].startTime > limit){
            meetings++;
            limit = arr[i].endTime;
        }
    }
    cout << meetings << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    nMeetingsInOneRoom();
    return 0;
}
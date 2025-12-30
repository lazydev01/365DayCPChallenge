#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void poweredAddition(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<int> pw2;
        pw2.push_back(1);
        int lastNum = 1;
        for(int i = 0; i < 32; i++){
            lastNum *= 2;
            pw2.push_back(lastNum);
        }
        int currMax = arr[0];
        int maxSeconds = 0;
        for(int i = 1; i < n; i++){
            currMax = max(currMax, arr[i]);
            int currSeconds = 0;
            for(int j=0; j < pw2.size(); j++){
                if(arr[i] >= currMax){
                    maxSeconds = max(maxSeconds, currSeconds);
                    break;
                } 
                arr[i]+=pw2[j];
                currSeconds++;
            }
        }
        cout << maxSeconds << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    poweredAddition();
    return 0;
}

/*

2 -1 -3 -4

2 0 -2 -3

2 2 0 -1

2 2 4 3


*/
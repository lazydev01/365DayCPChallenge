#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void zeroRemainderArray(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i]%k!=0){
                mp[k - (arr[i]%k)]++;
            }
        }
        int maxFreq = 1;
        int maxNum = 0;
        for(auto i : mp){
            if(i.second > maxFreq){
                maxFreq = i.second;
                maxNum = i.first;
            }
            else if(i.second == maxFreq){
                maxNum = max(maxNum, i.first);
            }
        }
        if(maxNum == 0){
            cout << 0 << endl;
        }
        else{
            cout << (((maxFreq - 1) * k) + (maxNum + 1)) << endl;
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    zeroRemainderArray();
    return 0;
}

/*

8 7 1 8 3 7 5 10 8 9
2 1 1 2 3 1 5 4 2 3 
4 5 5 4 3 5 1 2 4 3


20 100 50 20 100500
0 0 0 0 0

1 2 3 4 5 6 7 8



*/
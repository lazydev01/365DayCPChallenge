#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aliceBobAndCandies(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int moves = 0;
        bool aliceMove = true;
        int aliceCandies = 0;
        int bobCandies = 0;
        int lastCandy = 0;
        int aliceIndex = 0;
        int bobIndex = arr.size() - 1;
        while(aliceIndex <= bobIndex){
            // cout << aliceIndex << " " << bobIndex << endl;
            int currCandies = 0;
            if(aliceMove){
                while(aliceIndex <= bobIndex && currCandies <= lastCandy){
                    currCandies += arr[aliceIndex];
                    aliceCandies += arr[aliceIndex];
                    aliceIndex++;
                }
            }
            else{
                while(aliceIndex <= bobIndex && currCandies <= lastCandy){
                    currCandies += arr[bobIndex];
                    bobCandies += arr[bobIndex];
                    bobIndex--;
                }
            }
            // cout << aliceIndex << " " << bobIndex << endl;
            aliceMove = !aliceMove;
            moves++;
            lastCandy = currCandies;
        }
        cout << moves << " " << aliceCandies << " " << bobCandies << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    aliceBobAndCandies();
    return 0;
}
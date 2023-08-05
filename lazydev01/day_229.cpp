/*

    Question -> https://www.codechef.com/problems/AIRM

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool sortSecondElement(const pair<int,int> &a,  const pair<int,int> &b) 
{ 
  return (a.second < b.second); 
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arrival(n);
        vector<int> departure(n);
        for(int i=0; i<n; i++){
            cin >> arrival[i];
        }
        for(int i=0; i<n; i++){
            cin >> departure[i];
        }
        arrival.insert(arrival.end(), departure.begin(), departure.end());
        sort(arrival.begin(), arrival.end());
        int count = 1;
        int maxCount = 0;
        for(int i=0; i<arrival.size()-1; i++){
            if(arrival[i]==arrival[i+1]){
                count++;
            }
            else{
                maxCount = max(maxCount, count);
                count = 1;
            }
        }
        maxCount = max(maxCount, count);
        cout << maxCount << endl;
    }
    return 0;
}
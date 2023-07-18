#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

// #define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimizeMaximumBetweenGasStations(){
    long double n, k;
    cin >> n >> k;
    vector<long double> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    priority_queue<pair<long double, int>> pq;
    for(int i=0; i<n-1; i++){
        pq.push(make_pair((arr[i+1]-arr[i]), i));
    }
    vector<int> countArr(n-1, 0);
    for(int i=0; i<k; i++){
        pair<long double, int> p = pq.top();
        pq.pop();
        countArr[p.second]++;
        long double sectionLength = (arr[p.second+1]-arr[p.second])/(countArr[p.second]+1);
        pq.push(make_pair(sectionLength, p.second));
    }
    cout << pq.top().first << endl;
}   

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        

    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void potionsHardVersion(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    priority_queue<int> pq;
    int potions = 0, pos = 0, neg = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            potions++;
            pos+= arr[i];
        }
        else{
            neg+=abs(arr[i]);
            pq.push(abs(arr[i]));
            if(neg > pos){
                neg -= pq.top();
                pq.pop();
            }
        }
    }
    cout << potions + pq.size() << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    potionsHardVersion();
    return 0;
}
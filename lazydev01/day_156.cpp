#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sumOfTwoNumbersEqualToTarget(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    bool flag = false;
    for(auto i : m){
        int toFind = target - i.first;
        if(toFind == i.first && i.second > 1){
            flag = true;
            break;
        }
        else{
            if(m.find(toFind) != m.end())
            {
                flag = true;
                break;
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sumOfTwoNumbersEqualToTarget();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void wateringSystem(){
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int flower_1 = arr[0];
    sort(arr.begin()+1, arr.end(), greater<int>());
    int count = 0;
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int capacity = flower_1 * a;
    for(int i=0; i<n; i++){
        if(i>0){
            sum-=arr[i];
            count++;
        }
        if((capacity/(double)sum)>=b){
            cout << count << endl;
            break;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    wateringSystem();
    return 0;
}
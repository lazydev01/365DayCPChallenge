#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Moore's Voting Algorithm

void majorityElementInAnArrayOptimal(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int element = INT_MIN;
    int count = 0;
    for(int i=0; i<n; i++){
        if(count==0){
            element = arr[i];
            count++;
        }
        else if(arr[i]==element){
            count++;
        }
        else{
            count--;
        }
    }
    cout << element << endl;
}

void maximumSubarraySum(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int maxi = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    cout << maxi << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximumSubarraySum();
    return 0;
}
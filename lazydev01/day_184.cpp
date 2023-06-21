#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void firstAndLastOccurenceOfX(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int>::iterator first = lower_bound(arr.begin(), arr.end(), target);
    vector<int>::iterator last = upper_bound(arr.begin(), arr.end(), target);
    int first_index;
    int last_index;
    if((first-arr.begin())==n || *first!=target){
        first_index = -1;
        last_index = -1;
    }
    else{
        first_index = (first - arr.begin());
        last_index = (last - arr.begin()-1);
    }
    cout << first_index << " " << last_index << endl;
}

void countOccurence(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int>::iterator first = lower_bound(arr.begin(), arr.end(), target);
    vector<int>::iterator last = upper_bound(arr.begin(), arr.end(), target);
    int count = 0;
    if(*first==target){
        count = (last - first); 
    }
    cout << count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    return 0;
}
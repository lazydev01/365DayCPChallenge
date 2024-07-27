#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void longestConsecutiveSequence(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int max_count = 0;
    int count = 1;
    int curr_el = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]==curr_el+1){
            count++;
        }
        else{
            max_count = max(max_count, count);
            count = 1;
        }
        curr_el = arr[i];
    }
    max_count = max(max_count, count);
    cout << max_count << endl;
}

void longestConsecutiveSequenceOptimal(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_set<int> s;
    for(auto i : arr){
        s.insert(i);
    }
    int max_count = 0;
    for(auto i : s){
        if(s.find(i-1)==s.end()){
            int cnt = 1;
            int temp = i;
            while(s.find(temp+1)!=s.end()){
                cnt++;
                temp++;
            }
            max_count = max(max_count, cnt);
        }
    }
    cout << max_count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // longestConsecutiveSequence();
     longestConsecutiveSequenceOptimal();
    return 0;
}
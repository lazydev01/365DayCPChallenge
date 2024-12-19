#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void normalProblem(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='p'){
                cout << 'q';
            }
            else if(s[i]=='q'){
                cout << 'p';
            }
            else{
                cout << s[i];
            }
        }
        cout << endl;
    }
}



void allocateMinimumNumberOfPages(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    if(m>n){
        cout << -1 << endl;
    }
    int low = *max_element(arr.begin(), arr.end());
    int high = sum;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low + high) / 2;
        cout << mid << endl;
        int studentCount = 0;
        int currPages = 0;
        for(int i=0; i<n; i++){
            if((currPages + arr[i])>mid){
                studentCount++;
                currPages = arr[i];
            }
            else{
                currPages+=arr[i];
            }
        }
        studentCount++;
        cout <<studentCount << endl;
        if(studentCount <= m){
            ans = min(ans, mid);
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // normalProblem();
    allocateMinimumNumberOfPages();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int maxCoinsTabulation(vector<int>& a)
{
    int n = a.size();
    a.insert(a.begin(), 1);
    a.push_back(1);
	vector<vector<int>> dp(n+2, vector<int>(n+2, 0));
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(i>j)continue;
            int maxi = INT_MIN;
            for(int k=i; k<=j; k++){
                maxi = max(maxi, (a[i-1]*a[k]*a[j+1]) + dp[i][k-1] + dp[k+1][j]);
            }
            dp[i][j] = maxi;
        }
    }
}

int setsAndUnion(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<set<int>> arr(n);
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            set<int> s;
            for(int j=0; j<k; j++){
                int temp;
                cin >> temp;
                s.insert(temp);
            }
            arr[i] = s;
        }
        map<int, map<int, int>> mp;
        set<int> total_set;
        for(int i=0; i<n; i++){
            map<int, int> inner_map;
            for(auto j : arr[i]){
                inner_map[j]++;
                total_set.insert(j);
            }
            mp[i] = inner_map;
        }
        int maxi = 0;
        for(auto el : total_set){
            set<int> ans_set;
            for(int i=0; i<n; i++){
                if(mp[i][el]==0){
                    for(auto j : arr[i]){
                        ans_set.insert(j);
                    }
                }
            }
            int size = ans_set.size();
            maxi = max(maxi, size);
        }
        cout << maxi << endl;
    }
}

int cardGame(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> odd;
        vector<int> even;
        for(int i=0; i<n; i++){
            if(i%2==0){
                odd.push_back(arr[i]);
            }
            else{
                even.push_back(arr[i]);
            }
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end(), greater<int>());
        int ans = 0;
        int odd_size = odd.size();
        int even_size = even.size();
        int ind = 0;
        for(int i=0; i<min(odd_size, even_size); i++){
            if(odd[i]>0 && even[i]>0){
                ans += odd[i];
                ans += even[i];
            }
            else{
                ind = i;
                break;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    setsAndUnion();
    return 0;
}
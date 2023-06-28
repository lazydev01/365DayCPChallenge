#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcTime(vector<int> &v, int num){
    int ans = 0;
    for(int i=0; i<v.size(); i++){
        ans += ((v[i]-1)/num) + 1;
    }
    return ans;
}

void kokoEatingBananas() {
    int n, hrs;
    cin >> n >> hrs;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maximum = *max_element(arr.begin(), arr.end());
    int low = 1;
    int high = maximum;
    int ans;
    while(low<=high){
        int mid = (low + high)/2;
        if(calcTime(arr, mid)<=hrs){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int bouquesFormed(vector<int> &arr,int day, int k){
	int cnt = 0;
	int ans = 0;
	for(int i=0; i<arr.size(); i++){
		if(arr[i]<=day){
			cnt++;
		}
		else{
			ans += (cnt/k);
			cnt = 0;
		}
	}
	ans += (cnt/k);
	return ans;
}

void bloomingFlowers()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
	if(arr.size()<(m*k)) {
        cout << -1 << endl;
    }
    else{
        int minBloomDay = *min_element(arr.begin(), arr.end());
        int maxBloomDay = *max_element(arr.begin(), arr.end());
        int low = minBloomDay;
        int high = maxBloomDay;
        int ans;
        while(low<=high){
            int mid = (low + high)/2;
            if(bouquesFormed(arr, mid, k)>=m){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
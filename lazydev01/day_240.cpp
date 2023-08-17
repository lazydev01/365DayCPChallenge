#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

double medianOptimal(vector<int>& a, vector<int>& b) {
	int n1 = a.size();
	int n2 = b.size();
	if(n1>n2){
		return medianOptimal(b, a);
	}
	int low = 0;
	int high = n1;
	int left = (n1 + n2 + 1)/2;
	int n = n1 + n2;
	while(low<=high){
		int mid1 = (low + high)/2;
		int mid2 = left - mid1;
		int l1 = INT_MIN, l2 = INT_MIN;
		int r1 = INT_MAX, r2 = INT_MAX;
		if(mid1<n1){r1 = a[mid1];}
		if(mid2<n2){r2 = b[mid2];}
		if(mid1>0){l1 = a[mid1-1];}
		if(mid2>0){l2 = b[mid2-1];}
		if(l1<=r2 && l2<=r1){
			if((n1 + n2)%2==0){
				return (double)(max(l1, l2) + min(r1, r2))/2.0;
			}
			return max(l1, l2);
		}
		else if(l1>r2){
			high = mid1 - 1;
		}
		else{
			low = mid1 + 1;
		}
	}
	return 0;
}

int kthElement(vector<int> &a, vector<int>& b, int n1, int n2, int k){
    if(n1>n2) return kthElement(b, a, n2, n1, k);
    int low = max(0ll, k-n2);
    int high = min(n1, k);
    int left = k;
    while(low<=high){
        int mid1 = (low + high)/2;
        int mid2 = left - mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if(mid1<n1) r1 = a[mid1];
        if(mid2<n2) r2 = b[mid2];
        if(mid1>0) l1 = a[mid1-1];
        if(mid2>0) l2 = b[mid2-1];
        if(l1<=r2 && l2<=r1) return max(l1, l2);
        else if(l1>r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0;
}

int lowerBound(vector<int> &arr, int n, int k){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==k){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int max_count = 0;
    int index = -1;
    for(int i=0; i<n; i++){
        int cnt_ones = m - lowerBound(matrix[i], m, 1);
        if(cnt_ones>max_count){
            index = i;
            max_count = cnt_ones;
        }
    }
    return index;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
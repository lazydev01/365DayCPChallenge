#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void scuza(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> steps(n);
        for(int i=0; i<n; i++){
            cin >> steps[i];
        }
        vector<int> questions(q);
        for(int i=0; i<q; i++){
            cin >> questions[i];
        }
        vector<int> prefixMax(n);
        vector<int> prefixSum(n);
        prefixMax[0] = steps[0];
        prefixSum[0] = steps[0];
        for(int i=1; i<n; i++){
            prefixMax[i] = max(prefixMax[i-1], steps[i]);
            prefixSum[i] += prefixSum[i-1] + steps[i];
        }
        for(int i=0; i<q; i++){
            int low = 0;
            int high = n-1;
            int index = -1;
            while(low<=high){
                int mid = (low + high) / 2;
                if(prefixMax[mid] <= questions[i]){
                    index = mid;
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            if(index == -1) cout << 0 << " ";
            else cout << prefixSum[index] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    scuza();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void arrayReordering(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int first = -1;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(first==-1 && arr[i]%2){
                first = i;
            }
        }
        if(first!=-1){
            int second = first+1;
            while(second<n){
                if(arr[second]%2==0){
                    int temp = arr[first];
                    arr[first] = arr[second];
                    arr[second] = temp;
                    first++;
                }
                second++;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int gcd = __gcd(arr[i],2 * arr[j]);
                if (gcd > 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    arrayReordering();
    return 0;
}
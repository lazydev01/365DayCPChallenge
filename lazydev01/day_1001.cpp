#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void reverseAPermutation(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int currMax = n;
        int start = -1;
        int end = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] == currMax){
                if(start != -1){
                    end = i;
                    break;
                }
                currMax--;
            }
            else{
                if(start == -1){
                    start = i;
                }
            }
        }
        if(start != -1 && end != -1){
            for(int i = start; i <= (start + end) / 2; i++){
                int temp = arr[i];
                arr[i] = arr[end - i + start];
                arr[end - i + start] = temp;
            }
        }
        for(auto i : arr){
            cout << i << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    reverseAPermutation();
    return 0;
}
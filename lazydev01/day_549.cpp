#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sortAnArrayOfZeroesOnesAndTwos(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = n-1;
    int curr = 0;
    bool flag = false;
    while(start<=end && curr<=end){
        while(arr[start]==0){
            start++;
            if(start>end){
                flag = true;
                break;
            }
        }
        if(flag) break;
        while(arr[end]==2){
            end--;
            if(start>end){
                flag = true;
                break;
            }
        }
        if(flag) break;
        if(arr[curr]==0){
            if(curr > start){
                swap(arr[curr], arr[start]);
                start++;
            }
            else{
                curr++;
            }
            
        }
        else if(arr[curr]==2){
            swap(arr[curr], arr[end]);
            end--;
        }
        else{
            curr++;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sortAnArrayOfZeroesOnesAndTwos();
    return 0;
}
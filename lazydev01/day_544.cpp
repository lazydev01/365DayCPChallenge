#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sashaAndTheBeautifulArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end()) << endl;;
    }
}

void nextPermutation(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int index = -1;
    for(int i=n-1; i>0; i--){
        if(arr[i] > arr[i-1]){
            index = i-1;
            break;
        }
    }
    if(index== -1){
        sort(arr.begin(), arr.end());
    }
    else{
        for(int i=n-1; i>index; i--){
            if(arr[i]>arr[index]){
                int temp = arr[index];
                arr[index] = arr[i];
                arr[i] = temp;
                break;
            }
        }
        sort(arr.begin()+index+1, arr.end());
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

    // sashaAndTheBeautifulArray();
    nextPermutation();
    return 0;
}
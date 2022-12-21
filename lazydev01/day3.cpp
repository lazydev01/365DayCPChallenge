#include <bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]<=i+1){
                count += (i+1-arr[i]);
            }
            else{
                count = -1;
                break;
            }
        }
        cout << count << endl;
    }
return 0;
}
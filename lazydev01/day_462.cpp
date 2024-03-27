#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void replacingElements(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool isArrayGood = true;
        for(auto i : arr){
            if(i>k){
                isArrayGood = false;
                break;
            }
        }
        int mini = INT_MAX;
        int second_mini = INT_MAX;
        int min_freq = 0;
        if(!isArrayGood){
            for(int i : arr){
                if(i<mini){
                    mini = i;
                    min_freq=1;
                }
                else if(i==mini){
                    min_freq++;
                }
            }
            if(min_freq>1){
                second_mini = mini;
            }
            else{
                for(int i : arr){
                    if(i!=mini && i<second_mini){
                        second_mini = i;
                    }
                }
            }
            if((mini+second_mini)<=k){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main(){
    replacingElements();
    return 0;
}


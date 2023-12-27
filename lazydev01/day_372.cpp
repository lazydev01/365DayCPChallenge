#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sortTheArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> b(n-1);
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            b[i] = 0;
        }
        else{
            b[i] = 1;
        }
    }
    vector<int> sorted;
    vector<int> unsorted;
    for(int i=0; i<n-1; i++){
        if(b[i]==1){
            unsorted.push_back(i+1);
        }
        else{
            sorted.push_back(i+1);
        }
    }
    if(unsorted.size()==0){
        cout << "yes" << endl;
        cout << "1 1" << endl;
    }
    else{
        bool flag = false;
        for(int i=0; i<unsorted.size()-1; i++){
            if(unsorted[i]!=unsorted[i+1]-1){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "no" << endl;
        }
        else{
            flag = false;
            reverse(arr.begin() + unsorted[0] - 1, arr.begin() + unsorted[unsorted.size()-1]+1);
            for(int i=0; i<arr.size()-1; i++){
                if(arr[i]>arr[i+1]){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout << "no" << endl;
            }
            else{
                cout << "yes" << endl;
                cout << unsorted[0]  << " " << unsorted[unsorted.size()-1]+1 << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sortTheArray();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mergeTwoSortedArrayWithoutExtraSpace(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    int start = 0;
    int end = 0;
    while(start < n){
        if(arr1[start] <= arr2[end]){
            start++;
        }
        else{
            swap(arr1[start], arr2[end]);
            int tmp = end;
            while(tmp < m-1 && arr2[tmp] > arr2[tmp+1]){
                swap(arr2[tmp], arr2[tmp+1]);
                tmp++;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i=0; i<m; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}

void mergeTwoSortedArrayWithoutExtraSpaceOptimal1(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    int start = n-1;
    int end = 0;
    while(start >= 0 && end < m){
        if(arr1[start] > arr2[end]){
            swap(arr1[start], arr2[end]);
            start--;
            end++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    for(int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i=0; i<m; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}

void mergeTwoSortedArraysWithoutExtraSpaceOptimal2(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    int gap = (ceil)((n+m)/2.0);
    while(gap>0){
        int start = 0;
        int end = start+gap;
        while(end < m+n){
            if(start < n && end < n){
                if(arr1[start] > arr1[end]){
                    swap(arr1[start], arr1[end]);
                }
            }
            else if(start < n && end >= n){
                if(arr1[start] > arr2[end-n]){
                    swap(arr1[start], arr2[end-n]);
                }
            }
            else{
                if(arr2[start-n] > arr2[end-n]){
                    swap(arr2[start-n], arr2[end-n]);
                }
            }
            start++;
            end++;
        }
        if(gap==1) break;
        gap = (ceil)(gap / 2.0);
    }
    for(int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i=0; i<m; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // mergeTwoSortedArrayWithoutExtraSpace();
    // mergeTwoSortedArrayWithoutExtraSpaceOptimal1();
    mergeTwoSortedArraysWithoutExtraSpaceOptimal2();
    return 0;
}
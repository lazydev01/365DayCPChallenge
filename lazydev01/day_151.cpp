#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void linear_search(){
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    int ans = -1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}

void unionOfTwoSortedArrays(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }
    set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr1[i]);
    }
    for(int i=0; i<m; i++){
        s.insert(arr2[i]);
    }
    for(auto i : s){
        cout << i << endl;
    }
}

void unionOfTwoSortedArraysOptimal(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    vector<int> unionArr;
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
        }
        j++;
    }
    for(int i=0; i<unionArr.size(); i++){
        cout << unionArr[i] << " ";
    }
    cout << endl;
}

void intersectionOfTwoSortedArrays(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int j=0; j<m; j++){
        cin >> arr2[j];
    }
    int i=0;
    int j=0;
    vector<int> intersectArr;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            intersectArr.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int i=0; i<intersectArr.size(); i++){
        cout << intersectArr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // linear_search();
    // unionOfTwoSortedArrays();
    // unionOfTwoSortedArraysOptimal();
    intersectionOfTwoSortedArrays();
    return 0;
}
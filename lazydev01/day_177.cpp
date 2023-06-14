#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mergeSortedArraysWithoutSpaceOptimal1(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }
    int left = n1-1;
    int right = 0;
    while(left>=0 && right<n2){
        if(arr1[left]> arr2[right]){
            swap(arr1[left], arr2[right]);
        }
        left--;
        right++;
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    for(int i=0; i<arr1.size(); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i=0; i<arr2.size(); i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

}

void swapGreaterElement(vector<int> &arr1, vector<int> &arr2, int ind1, int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1], arr2[ind2]);
    }
}

void mergeSortedArraysWithoutExtraSpaceOptimal2(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }
    int len = n1 + n2;
    int gap = (len/2) + (len%2);
    while(gap>0){
        int left = 0;
        int right = left + gap;
        while(right<len){
            if(left<n1 && right>=n1){
                swapGreaterElement(arr1, arr2, left, right-n1);
            }
            else if(left>=n1){
                swapGreaterElement(arr2, arr2, left-n1, right-n1);
            }
            else{
                swapGreaterElement(arr1, arr1, left, right);
            }
            left++;
            right++;
        }
        if(gap==1)break;
        gap = (gap/2) + (gap%2);
    }
    for(int i=0; i<arr1.size(); i++){
        cout << arr1[i] <<  " ";
    }
    cout << endl;
    for(int i=0; i<arr2.size(); i++){
        cout << arr2[i] <<  " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // mergeSortedArraysWithoutSpaceOptimal1();    
    mergeSortedArraysWithoutExtraSpaceOptimal2();    
    return 0;
}
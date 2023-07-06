#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void swapNumbers(int low, vector<int> &arr){
    if(low>=(arr.size()-low-1)){
        return;
    }
    swap(arr[low], arr[arr.size()-low-1]);
    swapNumbers(low+1, arr);
}

void reverseAnArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    swapNumbers(low, arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool checkPalindrome(int index, string s){
    if(index<s.size()-1-index){
        if(s[index]!=s[s.size()-index-1]){
            return false;
        }
        return checkPalindrome(index+1, s);
    }
    return true;
}

void checkIfGivenStringIsPalindrome(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(checkPalindrome(0, s)){
        cout << "TRUE" << endl;
    }
    else{
        cout << "FALSE" << endl;
    }
}

int findFibonnaci(int n){
    if(n<=1)return n;
    return findFibonnaci(n-1)+findFibonnaci(n-2);
}

void fibonnaci(){
    int n;
    cin >> n;
    cout << findFibonnaci(n) << endl;

}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // reverseAnArray();
    // checkIfGivenStringIsPalindrome();
    fibonnaci();
    return 0;
}
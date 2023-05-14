#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Largest Element in the array -> Striver Array Series

void largestElementInTheArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maximum = arr[0];
    for(int i=1; i<n; i++){
        if(maximum<arr[i]){
            maximum = arr[i];
        }
    }
    cout << maximum << endl;
}

// Second Largest Element in an Array - Striver Series

void secondLargestElementInAnArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maximum = arr[0];
    int second_maximum = arr[0];
    for(int i=1; i<n; i++){
        if(maximum < arr[i]){
            second_maximum = maximum;
            maximum = arr[i];
        }
        if(second_maximum < arr[i] && maximum != arr[i]){
            second_maximum = arr[i];
        }
    }
    if(second_maximum == maximum){
        cout << -1 << endl;
    }
    else{
        cout << second_maximum << endl;
    }
}

//https://www.codingninjas.com/codestudio/problems/ninja-and-the-second-order-elements_6581960?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int maximum = a[0];
    int second_maximum = INT_MIN;
    int minimum = a[0];
    int second_minimum = INT_MAX;
    for(int i=1; i<n; i++){
        if(maximum < a[i]){
            second_maximum = maximum;
            maximum = a[i];
        }
        if(second_maximum< a[i] && maximum!=a[i]){
            second_maximum = a[i];
        }
        if(minimum > a[i]){
            second_minimum = minimum;
            minimum = a[i];
        }
        if(second_minimum > a[i] && minimum!=a[i]){
            second_minimum = a[i];
        }
    }
    vector<int> ans;
    ans.push_back(second_maximum);
    ans.push_back(second_minimum);
    return ans;
}

// Check if Array is Sorted - Striver Array Series
bool checkIfArrayIsSorted(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bool flag = true;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            flag = false;
            break;
        }
    }
    cout << flag << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        // largestElementInTheArray();
        // secondLargestElementInAnArray();
        checkIfArrayIsSorted();

    }
    return 0;
}

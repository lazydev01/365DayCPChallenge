#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Left Rotate the Array by D places - Optimal Solution
void leftRotateByDPlaces(){
    int n, d;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> d;
    d = d%n;
    for(int i=0; i<d/2; i++){
        int temp = arr[i];
        arr[i]=arr[d-i-1];
        arr[d-i-1] = temp;
    }
    for(int i=d; i<d+(n-d)/2; i++){
        int temp = arr[i];
        arr[i]=arr[n-(i-d)-1];
        arr[n-(i-d)-1] = temp;
    }
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Move All Zeroes To The End
void moveAllZeroesToTheEnd(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[j] = arr[i];
            j++;
        }
    }
    for(int i=j; i<n; i++){
        arr[i]=0;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Move All Zeroes To The End - Optimal Solution

void moveAllZeroesToTheEndOptimal(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int j=n;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1; i<n; i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
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

    // leftRotateByDPlaces();
    // moveAllZeroesToTheEnd();
    moveAllZeroesToTheEndOptimal();
    return 0;
}
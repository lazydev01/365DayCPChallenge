#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

//Remove Duplicates in place from sorted array

void removeDuplicatesInPlaceFromSortedArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int unique_index = 1;
    int temp = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]!=temp){
            arr[unique_index] = arr[i];
            unique_index++;
            temp = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Left Rotate the array by 1 place

void leftRotateBy1Place(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Left Rotate the array by D Places
void leftRotateByDPlaces(){
    int n, d;
    cin >> n >> d;
    d = d%n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> tempArray(d);
    for(int i=0; i<d; i++){
        tempArray[i] = arr[i];
    }
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i=n-d; i<n; i++){
        arr[i]=tempArray[i-(n-d)];
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

    int t;
    cin >> t;

    while (t--)
    {

        // removeDuplicatesInPlaceFromSortedArray();
        // leftRotateBy1Place();
        leftRotateByDPlaces();

    }
    return 0;
}


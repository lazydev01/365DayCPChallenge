#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findMissingNumberInAnArrayOptimal1(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = (n+1)*(n+2)/2;
    int sumOfArr = 0;
    for(int i=0; i<n; i++){
        sumOfArr+=arr[i];
    }
    cout << sum - sumOfArr << endl;
}

void findMissingNumberInAnArrayOptimal2(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0; i<n; i++){
        xor1^=(i+1);
        xor2^=arr[i];
    }
    xor1^=(n+1);
    cout << (xor1^xor2) << endl;
}

void maximumConsecutiveOnes(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    int maxCount = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }
        else{ 
            count = 0;
        }
        maxCount = max(maxCount, count);
    }
    cout << maxCount << endl;
}

void findNumberThatAppearsOnceAndOtherNumbersTwice(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int xor1 = 0;
    for(int i=0; i<n; i++){
        xor1^=arr[i];
    }
    cout << xor1 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // findMissingNumberInAnArrayOptimal1();
    // findMissingNumberInAnArrayOptimal2();
    // maximumConsecutiveOnes();
    findNumberThatAppearsOnceAndOtherNumbersTwice();

    return 0;
}
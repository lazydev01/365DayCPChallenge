#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findSqrtOfANumber(){
    int n;
    cin >> n;
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = (low + high)/2;
        if((mid*mid)<=n && ((mid+1)*(mid+1))>n){
            cout << mid << endl;
        }
        else if((mid*mid)>n){
            high = mid - 1; 
        }
        else{
            low = mid + 1;
        } 
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
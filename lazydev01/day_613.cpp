#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void presentForLena(){
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        int white_spaces = n-i;
        int nums = i+1;
        for(int j=0; j<white_spaces; j++){
            cout << "  ";
        }
        for(int j=0; j<nums; j++){
            cout << j;
            if(nums!=1){
                cout << " ";
            }
        }
        nums--;
        for(int j=nums-1; j>=0; j--){
            cout << j;
            if(j!=0){
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=n; i>0; i--){
        int white_spaces = n - i + 1;
        int nums = i-1;
        for(int j=0; j<white_spaces; j++){
            cout << "  ";
        }
        for(int j=0; j<=nums; j++){
            cout << j;
            if(nums!=0){
                cout << " ";
            }
        }
        nums--;
        for(int j=nums; j>=0; j--){
            cout << j;
            if(j!=0){
                cout << " ";
            }
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    presentForLena();
    return 0;
}
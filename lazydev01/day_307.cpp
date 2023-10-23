#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void hotelier(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> arr(10, 0);
    for(int i=0; i<n; i++){
        if(s[i]=='L'){
            for(int i=0; i<10; i++){
                 if(arr[i]==0){
                    arr[i]=1;
                    break;
                 }   
            } 
        }
        else if(s[i]=='R'){
            for(int i=9; i>-1; i--){
                 if(arr[i]==0){
                    arr[i]=1;
                    break;
                 }   
            }
        }
        else{
            int no = s[i]-'0'; 
            arr[no] = 0;
        }
    }
    for(int i=0; i<10; i++){
        cout << arr[i];
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    hotelier();
    return 0;
}
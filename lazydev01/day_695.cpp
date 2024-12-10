#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gregsWorkout(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int chest = 0;
    int biceps = 0;
    int back = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i%3==0){
            chest += arr[i];
        }
        else if(i%3==1){
            biceps += arr[i];
        }
        else{
            back += arr[i];
        }
    }
    if(chest > biceps && chest>back){
        cout << "chest" << endl;
    }
    else if(biceps > chest && biceps > back){
        cout << "biceps" << endl;
    }
    else{
        cout << "back" << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    gregsWorkout();
    return 0;
}
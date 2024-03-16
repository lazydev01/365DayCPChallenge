#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void overspeeding(){
    int n;
    cin >> n;
    if(n>40){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void fiftyFiftyRule(){
    int t;
    cin >> t;
    while(t--){
        int attendance, marks;
        cin >> attendance >> marks;
        char grade = 'A';
        if(attendance<50){
            grade = 'Z';
        }
        else if(marks<50){
            grade = 'F';
        }
        cout << grade << endl;
    }
} 

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // overspeeding();
    fiftyFiftyRule();
    return 0;
}
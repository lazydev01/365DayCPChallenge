#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void printName(int i, int n){
    if(i>n){
        return;
    }
    else{
        cout << "Arpit";
        i++;
        printName(i, n);
    }
    
}

void printNameNTimes(){
    int n;
    cin >> n;
    printName(1, n);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    printNameNTimes();
    return 0;
}
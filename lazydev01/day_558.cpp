#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void doubleCola(){
    int n;
    cin >> n;
    vector<string> customers = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int iteration = (ceil)(n/(customers.size() * 1.0));
    int position = log2(iteration);
    int toSkip = 1;
    for(int i=0; i<position; i++){
        n-=(toSkip*customers.size());
        toSkip*=2;
    }
    int repetition = 1;
    for(int i=0; i<position; i++){
        repetition*=2;
    }
    n = (ceil)(n/(repetition*1.0));
    cout << customers[n-1] << endl;   
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    doubleCola();
    return 0;
}
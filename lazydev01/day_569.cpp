#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void almostPrime(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=6; i<=n; i++){
        int prime_count = 0;
        int num = i;
        for(int j=2; j<=(i/2); j++){
            if(num%j==0){
                prime_count++;
                if(prime_count>2){
                    break;
                }
                while(num%j==0){
                    num = num / j;
                }
            }
        }
        if(prime_count == 2){
            count++;
        }
    }
    cout << count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    almostPrime();
    return 0;
}
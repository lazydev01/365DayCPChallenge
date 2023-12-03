#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void marbles(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c = 0;
        int a1 = a;
        int b1 = b;
        if(a>=b){
            while(a%b!=0 && a1%b1!=0){
                c++;
                a--;
                b++;
                a1++;
                b1--;
            }
	    }
        else{
	        while(a1%b1!=0){
                c++;
                a1++;
                b1--;
            }
	    }
        cout << c << endl;
    }
}

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void monster(){
    int t;
    cin >> t;
    while(t--){
        int h;
        cin >> h;
        int i = 1;
        int cnt = 0;
        while(true){
            if(isPrime(h)){
                cout << cnt + 1 << endl;
                break;
            }
            else if(h==0){
                cout << cnt << endl;
                break;
            }
            else if(h<0){
                cout << -1 << endl;
                break;
            }
            h-=i;
            i*=2;
            cnt++;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // marbles();
    monster();
    return 0;
}
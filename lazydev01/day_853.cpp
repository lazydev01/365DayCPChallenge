#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void antiSudoku(){
    int t;
    cin >> t;
    while(t--){
        int j = 0;
        for(int i = 0; i < 9; i++){
            string s;
            cin >> s;
            if(s[j] == '9'){
                s[j] = '1';
            }
            else{
                s[j]+=1;
            }
            j+=3;
            if(j > 8){
                j-=8;
            }
            cout << s << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    antiSudoku();
    return 0;
}

/*

0 0
1 3
2 6

3 1
4 4
5 7

6 2
7 5
8 8






*/
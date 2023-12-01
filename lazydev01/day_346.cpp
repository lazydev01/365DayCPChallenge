#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void givenLengthAndSumOfDigits(){
    int m, s;
    cin >> m >> s;
    if(m==1 && s==0){
        cout << "0 0" << endl;
    }
    else if(s==0){
        cout << "-1 -1" << endl;
    }
    else if(s>(9*m)){
        cout << "-1 -1" << endl;
    }
    else{
        string max_no = "";
        while(s>=9){
            max_no += '9';
            s-=9;
        }
        if(s!=0){
            max_no += to_string(s);
        }
        while(max_no.size()!=m){
            max_no += '0';
        }
        string min_no = max_no;
        reverse(min_no.begin(), min_no.end());
        if(min_no[0]=='0'){
            min_no[0] = '1';
            for(int i=1; i<m; i++){
                if(min_no[i]!='0'){
                    min_no[i] = min_no[i] - 1;
                    break;
                }
            }
        }
        cout << min_no << " " << max_no << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    givenLengthAndSumOfDigits();
    return 0;
}
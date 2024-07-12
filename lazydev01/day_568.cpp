#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fact(int n){
    if(n<2) return 1;
    return fact(n-1)*n;
}

int pow(int n){
    int ans = 1;
    for(int i=0; i<n; i++){
        ans *=2;
    }
    return ans;
}

void dreamoonAndWifi(){
    string a, b;
    cin >> a >> b;
    int q_marks = 0;
    int neg_a = 0;
    int neg_b = 0;
    for(int i=0; i<a.size(); i++){
        
        if(a[i]=='-') neg_a++;
    }
    for(int i=0; i<b.size(); i++){
        if(b[i] == '?') q_marks++;
        if(b[i] == '-') neg_b++;
    }
    int r = neg_a - neg_b;
    if(q_marks<r || r<0){
        cout << fixed << setprecision(12) << 0 << endl;
    }
    else{
        int numerator = fact(q_marks) / (fact(r) * fact(q_marks - r));
        int denominator = pow(q_marks);
        cout << fixed << setprecision(12) << (numerator * 1.0 / denominator * 1.0) << endl;
    }

}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    dreamoonAndWifi();
    return 0;
}
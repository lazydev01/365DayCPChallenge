#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

double median(vector<int>& a, vector<int>& b) {
    vector<int> c;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
        c.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        c.push_back(b[j]);
        j++;
    }
    int n = a.size() + b.size();
    if(n%2==1){
        return (double)(c[n/2]);
    }
    else{
        return (double)(c[n/2] + c[(n/2)-1])/2;
    }
}

// Codeforces Round 893 (Div. 2)

void problemA(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(c%2==0){
            if(a>b){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
        }
        else{
            if(a>=b){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
        }
    }
}

void problemB(){
    int t;
    cin >> t;
    while(t--){
        int n, m, d;
        cin >> n >> m >> d;
        vector<int> cookieSeller(m);
        for(int i=0; i<m; i++){
            cin >> cookieSeller[i];
        }
        if(cookieSeller[0]!=1){
            cookieSeller.insert(cookieSeller.begin(), 1);
        }
        cookieSeller.push_back(n);
        int noOfCookies = 1;
        int noOfCookieSellers = 0;
        for(int i=1; i<cookieSeller.size()-1; i++){
            noOfCookies += ((cookieSeller[i]-cookieSeller[i-1]-1)/d)+1;
            if(((cookieSeller[i+1]-cookieSeller[i-1])/d)!=(((cookieSeller[i]-cookieSeller[i-1])/d)+1)){
                noOfCookieSellers++;
            } 
        }
        noOfCookies += (n-cookieSeller[cookieSeller.size()-2])/d;
        cout << noOfCookies-1 << " " << noOfCookieSellers << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // problemA();
    problemB();
    return 0;
}
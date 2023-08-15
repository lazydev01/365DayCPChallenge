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

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
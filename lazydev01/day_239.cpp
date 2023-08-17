#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

double medianBetter(vector<int>& a, vector<int>& b) {
    int ind = 0;
    int el1 = 0;
    int el2 = 0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            if(ind==((a.size() + b.size())/2)-1){
                el1 = a[i];
            }
            if(ind==((a.size() + b.size())/2)){
                el2 = a[i];
            }
            ind++;
            i++;
        }
        else{
            if(ind==((a.size() + b.size())/2)-1){
                el1 = b[j];
            }
            if(ind==((a.size() + b.size())/2)){
                el2 = b[j];
            }
            ind++;
            j++;
        }
    }
    while(i<a.size()){
        if(ind==((a.size() + b.size())/2)-1){
            el1 = a[i];
        }
        if(ind==((a.size() + b.size())/2)){
            el2 = a[i];
        }
        ind++;
        i++;
    }
    while(j<b.size()){
        if(ind==((a.size() + b.size())/2)-1){
            el1 = b[j];
        }
        if(ind==((a.size() + b.size())/2)){
            el2 = b[j];
        }
        ind++;
        j++;
    }
    int n = a.size() + b.size();
    if(n%2==0){
        return (double)((double)el1 + (double)el2)/2.0;
    }
    else{
        return (double)el2;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}
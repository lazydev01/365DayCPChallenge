#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll seg[800001];

void add(ll node, ll l, ll h, ll val)
{
    if(l<h){
        ll m=(l+h)/2;
        
        if(val>=l && val<=m){
            add(2*node+1, l, m, val);
        }else if(val>m && val<=h){
            add(2*node+2, m+1, h, val);
        }
        seg[node]=seg[2*node+1]+seg[2*node+2];
    }else if(l==h){
        seg[node]++;
    }
}

ll query(ll node, ll l, ll h, ll l1, ll h1)
{
    if(l<=h){
        if(l1<=l && h1>=h){
            return seg[node];
        }else if(l1>h || h1<l){
            return 0;
        }else{
            ll m=(l+h)/2;
            ll p1=query(2*node+1, l, m, l1, h1);
            ll p2=query(2*node+2, m+1, h, l1, h1);
            return p1+p2;
        }
    }else{
        return 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, ans, m;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        m=n-1;
        vector<ll> a, b;
        
        ans=0;
        
        
        for(i=1; i<=n; i++)
        {
            cin>>j;
            if(j<i)
            {
                a.push_back(j);
                b.push_back(i);
            }
        }
        
        n=a.size();
        
        
        for(i=0; i<=4*m; i++){
            seg[i]=0;
        }
        
        for(i=n-1; i>=0; i--)
        {
            ans=ans+query(0, 0, m+1, b[i]+1, m+1);
            add(0, 0, m+1, a[i]);
        }
        
        cout<<ans<<"\n";
    }
    
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void slavicsExam(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        int i=0, j=0;
        while(i<n && j<m){
            if(a[i]=='?' || a[i]==b[j]){
                a[i]=b[j];
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if(j==m){
            for(int k=0; k<n; k++){
                if(a[k]=='?'){
                    a[k] = 'a';
                }
            }
            cout << "YES" << endl;
            cout << a << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    slavicsExam();
    return 0;
}
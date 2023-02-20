/*

    Question -> https://www.codechef.com/problems/CONCATPAL

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        map<char, int> m_a;
        map<char, int> m_b;
        for(int i=0; i<n; i++){
            m_a[a[i]]++;
        }
        for(int i=0; i<m; i++){
            m_b[b[i]]++;
        }
        bool flag = false;
        int count = 0;
        if(n==m){
            for(auto i: m_a){
                if(m_b.find(i.first)==m_b.end()){
                    flag = true;
                    break;
                }
            }
        }
        else if(n<m){
            for(int i=0; i<n; i++){
                if(m_b.find(a[i])!=m_b.end()){
                    m_b[a[i]]--;
                }
                else{
                    flag = true;
                    break;
                }
            }
            if(!flag){
                for(auto i:m_b){
                    if(i.second%2!=0){
                        count++;
                    }
                    if(count>1){
                        flag = true;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0; i<m; i++){
                if(m_a.find(b[i])!=m_a.end()){
                    m_a[b[i]]--;
                }
                else{
                    flag = true;
                    break;
                }
            }
            if(!flag){
                for(auto i:m_a){
                    if(i.second%2!=0){
                        count++;
                    }
                    if(count>1){
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
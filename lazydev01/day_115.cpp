/*

    Question -> https://www.codechef.com/problems/UNQEQ

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

        int n;
        cin >> n;
        if(n%4==0){
            cout << "YES" << endl;
            vector<int> first;
            vector<int> second;
            for(int i=0; i<n/2; i++){
                if((i+1)%2!=0){
                    first.push_back(i+1);
                }
                else{
                    second.push_back(i+1);
                }
            }
            for(int i=n/2; i<n; i++){
                if((i+1)%2!=0){
                    second.push_back(i+1);
                }
                else{
                    first.push_back(i+1);
                }
            }
            for(int i=first.size()-1; i>=0; i--){
                cout << first[i] << " ";
            }
            cout << endl;
            for(int i=0; i<second.size(); i++){
                cout << second[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
/*

    Question -> https://www.codechef.com/problems/DIRECTI

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
        vector<string> arr(n);
        for(int i=0; i<n; i++){
            string str;
            getline(cin >> ws, arr[i]);
        }
        char temp;
        for(int i=n-1; i>=0; i--){
            if(i==n-1){
                temp = arr[i][0];
                if(temp=='L'){
                    arr[i].replace(0,4, "Begin");
                }
                else{
                    arr[i].replace(0,5, "Begin");
                }
            }
            else{
                char temp2;
                temp2 = arr[i][0];
               if(temp2=='L'){
                    if(temp=='L'){
                        arr[i].replace(0,4, "Right");
                    }
                    else{
                        arr[i].replace(0,4, "Left");
                    }   
               } 
               else{
                    if(temp=='L'){
                        arr[i].replace(0,5, "Right");
                    }
                    else{
                        arr[i].replace(0,5, "Left");
                    } 
               }
               temp = temp2;
            }
            cout << arr[i] << endl;
        }

    }
    return 0;
}
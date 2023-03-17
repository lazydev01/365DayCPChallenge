/*

    Question -> https://www.codechef.com/problems/PMA

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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> first;
        vector<int> second;
        for(int i=0; i<n; i++){
            if(i%2==0){
                first.push_back(abs(arr[i]));
            }
            else{
                second.push_back(abs(arr[i]));
            }
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        int temp = 0;
        if(first[0]<second[second.size()-1]){
            temp = first[0];
            first[0] = second[second.size()-1];
            second[second.size()-1] = temp;
        }
        int temp1 = 0;
        for(int i=0; i<first.size(); i++){
            temp1 += first[i];
        }
        int temp2 = 0;
        for(int i=0; i<second.size(); i++){
            temp2 += second[i];
        }
        cout << temp1 - temp2 << endl;
    }
    return 0;
}
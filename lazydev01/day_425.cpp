#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void caesarCipherLite(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string plainText, cipherText;
        cin >> plainText >> cipherText;
        for(int i=0; i<n; i++){
            int p = plainText[i] - 'a' + 1;
            int c = cipherText[i] - 'a' + 1;
            int diff;
            if(p>c){
                diff = (26-p) + c;
            }
            else{
                diff = c-p;
            }
            cout << (diff + ((diff%3)*26))/3 << " ";
        }
        cout << endl;
    }
}

void countSubarrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = 0;
            for(int j=i; j<n; j++){
                sum += arr[j];
                if(sum>n){
                    break;
                }
                mp[sum]++;
            }
        }
        for(int i=0; i<n; i++){
            cout << mp[i+1] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // caesarCipherLite();
    countSubarrays();
    return 0;
}
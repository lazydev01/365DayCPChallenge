#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void problemA(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int curr = 1;
        int count = s.size();
        for(int i=0; i<s.size(); i++){
            int ch = s[i] - '0';
            if(ch==0){
                ch = 10;
            }
            if(ch>=curr){
                count += (ch-curr);
            }
            else{
                count += (curr-ch);
            }
            curr = ch;
        }
        cout << count << endl;
    }
}

void problemB(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int odd_chars = 0;
        for(auto i : mp){
            if(i.second % 2 == 1){
                odd_chars++;
            }
        }
        if((odd_chars)>(k+1)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

void problemC(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        bool flag = false;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%k==0){
                flag = true;
            }
        }
        if(flag){
            cout << 0 << endl;
        }
        else if(k==4){
            if(n==1){
                cout << (k-(arr[0]%k)) << endl;
            }
            else{
                int odd_cnt = 0;
                int even_cnt = 0;
                int rem_3 = 0;
                for(int i=0; i<n; i++){
                    if(arr[i]%2==0){
                        even_cnt++;
                    }
                    else if(arr[i]%4==3){
                        rem_3++;
                    }
                    else{
                        odd_cnt++;
                    }
                    if(even_cnt>1){
                        break;
                    }
                }
                if(even_cnt>1){
                    cout << 0 << endl;
                }
                else if(rem_3>0){
                    cout << 1 << endl;
                }
                else{
                    cout << 2 - even_cnt << endl;
                }
            }
            
        }
        else{
            int mini = INT_MAX;
            for(int i=0; i<n; i++){
                int rem = arr[i]%k;
                int left = k-rem;
                mini = min(mini,left);
            }
            cout << mini << endl;
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // problemA();
    // problemB();
    problemC();
    return 0;
}
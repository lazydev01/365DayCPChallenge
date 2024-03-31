#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void antiTriangle(){
    int t;
    cin >> t;
    while(t--){
        int n, l;
        cin >> n >> l;
        for(int i=1; i<=min(n, l/2); i++){
            cout << i << " ";
        }
        int num = l/2;
        for(int i=l/2; i<n; i++){
            num+=(l);
            cout << num << " ";
            
        }
        cout << endl;
    }
}

void abcConjecture(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        map<int, int> mp_a, mp_b;
        for(char i : a){
            mp_a[i]++;
        }
        for(char i : b){
            mp_b[i]++;
        }
        bool flag = true;
        for(char c = 'a'; c<='c'; c++){
            if(mp_a[c]!=mp_b[c]){
                flag = false;
            }
        }
        if(!flag){
            cout << "NO" << endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if(a[i]=='b' && a[i]!=b[i]){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << "NO" << endl;
            continue;
        }
        vector<int> misplaced_a_arr, misplaced_c_arr, b_arr;
        for(int i=0; i<n; i++){
            if(a[i]=='b'){
                b_arr.push_back(i);
            }
            else if(a[i]!=b[i]){
                if(a[i]=='a'){
                    misplaced_a_arr.push_back(i);
                }
                else{
                    misplaced_c_arr.push_back(i);
                }
            }
        }
        for(int i=0; i<misplaced_a_arr.size(); i++){
            if(misplaced_a_arr[i] > misplaced_c_arr[i]){
                flag = false;
                break;
            }
            else{
                int a_ind = lower_bound(b_arr.begin(), b_arr.end(), misplaced_a_arr[i])-b_arr.begin();
                int c_ind = lower_bound(b_arr.begin(), b_arr.end(), misplaced_c_arr[i])-b_arr.begin();
                if(a_ind>=c_ind){
                    flag = false;
                    break;
                }
            }
        }
        if(!flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // antiTriangle();
    abcConjecture();    
    return 0;
}

// cabac
// acbca

// ccbaa
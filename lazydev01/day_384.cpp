#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void decoratingChristmasTree(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int decor = 0;
        int case1small = y/3;
        int case1 = min(x, case1small);
        decor+=case1;
        x-=case1;
        decor+=(x/2);
        if(n<=decor){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

void aPlusBRemastered(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        int el = a[0] + b[0];
        bool flag = false;
        for(int i=1; i<n; i++){
            if(el!=(a[i] + b[i])){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
        }
        else{
            for(auto i : a){
                cout << i << " ";
            }
            cout << endl;
            for(auto i : b){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

void makeAllZero(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 0;
        while(arr[0]!=0){
            int mini = INT_MAX;
            int index_count = -1;
            for(int i = 0; i < n; i++){
                if(arr[i]==0){
                    index_count = i;
                    break;
                }
                mini = min(mini, arr[i]);
            }
            if(index_count==-1){
                index_count = n;
            }
            if(index_count < mini){
                count+=(index_count);
                for(int i = 0; i < index_count; i++){
                    arr[i] = 0;
                }
            }
            else{
                count+=mini;
                for(int i = 0; i < index_count; i++){
                    arr[i]-=mini;
                }
            }
        }
        for(auto i : arr){
            if(i!=0){
                count++;
            }
        }
        if(count>n){
            count = n;
        }
        cout << count << endl;
    }
}
    
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // decoratingChristmasTree();
    // aPlusBRemastered();
    makeAllZero();
    return 0;
}

/*

5 3 3 5 2 4 5 2 1

4 2 2 4 1 3 4 1 0

3 1 1 3 0 2 3 0 0

2 0 0 2 0 2 3 0 0

*/
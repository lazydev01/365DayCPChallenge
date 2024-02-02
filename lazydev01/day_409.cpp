    #include <bits/stdc++.h>
    using namespace std;

    #ifdef ONLINE_JUDGE
    #define cerr if(0) cerr
    #endif

    #define int long long int
    #define endl "\n"
    #define YES cout<<"YES\n"
    #define NO cout<<"NO\n"

    void arithmeticArray(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            vector<int> arr(n);
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }
            int sum = accumulate(arr.begin(), arr.end(), 0);
            if(sum>=n){
                cout << sum - n << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
    }

    int32_t main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        arithmeticArray();
        return 0;
    }
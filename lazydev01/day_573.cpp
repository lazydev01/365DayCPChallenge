    #include <bits/stdc++.h>
    using namespace std;

    #ifdef ONLINE_JUDGE
    #define cerr if(0) cerr
    #endif

    #define int long long int
    #define endl "\n"
    #define YES cout<<"YES\n"
    #define NO cout<<"NO\n"

    void iHate1111(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            // n can be represented as 11*a + 111*b
            // 11*a + 111*b = n
            // 11*a + ((11*10) + 1)*b = n
            // 11*(a+(10*b)) + b = n
            // Modding by 11 on both sides
            // b = n%11
            int b = n%11;
            // n - 111*b
            int a = 0;
            if((n - 111*b) > 0 && (n - 111*b)%11==0){
                a = (n - 111*b)/11;
            }
            if(a*11 + 111*b == n){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    void majorityElementN3(){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int el1 = INT_MIN, el2 = INT_MIN, cnt1 = 0, cnt2 = 0;
        for(auto i : arr){
            if(cnt1==0 && i!=el2){
                cnt1++;
                el1 = i;
            }
            else if(cnt2 == 0 && i!=el1){
                cnt2++;
                el2 = i;
            }
            else if(i==el1){
                cnt1++;
            }
            else if(i==el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(auto i : arr){
            if(i==el1) cnt1++;
            else if(i==el2) cnt2++;
        }
        if(cnt1 > (n/3)){
            cout << el1 << " ";
        }
        if(cnt2 > (n/3)){
            cout << el2 << " ";
        }
        cout << endl;
    }

    int32_t main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        // iHate1111();
        majorityElementN3();
        return 0;
    }
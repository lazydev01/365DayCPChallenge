    #include <bits/stdc++.h>
    using namespace std;

    #ifdef ONLINE_JUDGE
    #define cerr if(0) cerr
    #endif

    #define int long long int
    #define endl "\n"
    #define YES cout<<"YES\n"
    #define NO cout<<"NO\n"

    string removeZeroes(string s){
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '0'){
                ans += s[i];
            }
        }
        return ans;
    }

    void lifeWithoutZeroes(){
        int a, b;
        cin >> a >> b;
        int c = a + b;
        string sc = to_string(c);
        string sa = to_string(a);
        string sb = to_string(b);
        int a2 = stoi(removeZeroes(sa));
        int b2 = stoi(removeZeroes(sb));
        int c2 = stoi(removeZeroes(sc));
        if(a2 + b2 == c2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    int32_t main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        lifeWithoutZeroes();
        return 0;
    }

    /*
    
    822
    280
    
    
    */
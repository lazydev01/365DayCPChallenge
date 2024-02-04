#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cookieDay(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int mini = INT_MAX;
        for(int i : arr){
            if(i>=k){
                int mod = i%k;
                mini = min(mini, mod);
            }
        }
        if(mini==INT_MAX){
            cout << -1 << endl;
        }
        else{
            cout << mini << endl;
        }
    }
}

void anotherGoodString(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<char> queries(q);
        for(int i=0; i<q; i++){
            cin >> queries[i];
        }
        char curr = ' ';
        int count = 1;
        int ans = 1;
        for(char i : s){
            if(curr==i){
                count++;
            }
            else{
                count = 1;
            }
            curr = i;
            ans = max(ans, count);
        }
        cout << ans << " ";
        for(char i : queries){
            if(curr==i){
                count++;
            }
            else{
                count = 1;
            }
            curr = i;
            ans = max(ans, count);
            cout << ans << " ";
        }
        cout << endl;
    }
}

void kOddSum(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        if(k==n-1){
            for(int i=0; i<n; i++){
                ans.push_back(i+1);
            }
        }
        else{
            int odd = 1;
            int even = 2;
            if(k%2){
                if(n%2){
                    ans.push_back(odd);
                    odd+=2;
                }
                for(int i=0; i<(n-k+1)/2; i++){
                    ans.push_back(odd);
                    odd+=2;
                }
                for(int i=0; i<k/2; i++){
                    ans.push_back(even);
                    ans.push_back(odd);
                    odd+=2;
                    even+=2;
                }
                for(int i=0; i<(n-k+1)/2; i++){
                    ans.push_back(even);
                    even+=2;
                }
            }
            else{
                for(int i=0; i<((n-k)/2); i++){
                    ans.push_back(even);
                    even+=2;
                }
                for(int i=0; i<((k-2)/2); i++){
                    ans.push_back(odd);
                    ans.push_back(even);
                    odd+=2;
                    even+=2;
                }
                for(int i=0; i<((n-(k-2)+1)/2); i++){
                    ans.push_back(odd);
                    odd+=2;
                }
                ans.push_back(even);
            }
        }
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // cookieDay();
    // anotherGoodString();
    kOddSum();
    return 0;
}

/*

4 1
1 3 2 4

4 2
4 3 1 2

4 3
1 2 3 4

5 1
1 3 5 2 4

5 2
4 5 3 1 2

5 3
1 3 2 5 4

5 4
5 4 3 2 1

7 1
1 3 5 7 2 4 6

7 3
1 3 5 2 7 4 6

7 5
1 3 2 5 4 7 6

7 2
4 2 1 3 5 7 6

7 4
4 1 2 3 5 7 6

7 6
1 2 3 4 5 6 7

8 1
1 3 5 7 2 4 6 8

8 3
1 3 5 2 7 4 6 8

8 5
1 3 6 5 2 7 4 8

8 7
1 2 3 4 5 6 7 8

8 2
2 4 6 1 3 5 7 8

8 4
2 4 1 6 3 5 7 8

8 6
2 5 4 1 6 3 7 8

9 1
1 3 5 7 9 2 4 6 8

9 3
1 3 5 7 2 9 4 6 8

9 5
1 3 5 6 7 2 9 4 8

9 7
1 3 8 5 6 7 2 9 4

9 2
2 4 6 1 3 5 7 9 8

9 4
2 4 1 6 3 5 7 9 8

9 6
2 5 4 1 6 3 7 9 8

9 8
1 2 3 4 5 6 7 8 9

*/
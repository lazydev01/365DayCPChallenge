#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void regularBracketSequence(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        bool flag = true;
        if(n%2==1){
            flag = false;
        }
        stack<int> st;
        int countOpen = 0;
        int countClosed = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                countOpen++;
            }
            else if(s[i] == ')'){
                countClosed++;
            }
        }
        int extraOpen = max(0ll, countClosed - countOpen) + ((n - countOpen - countClosed) / 2);
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.empty()){
                    flag = false;
                    break;
                }
                else{
                    st.pop();
                }
            }
            else{
                // cout << extraOpen << endl;
                if(extraOpen > 0){
                    extraOpen--;
                    st.push('(');
                }
                else{
                    if(!st.empty()){
                        st.pop();
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag && st.empty()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    regularBracketSequence();
    return 0;
}

/*

?)(?

*/
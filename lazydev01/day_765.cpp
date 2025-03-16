#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void validParentheses(){
    string s;
    cin >> s;
    stack<char> st;
    bool ans = true;
    for(char c : s){
        if(!ans){
            break;
        }
        switch(c){
            case '(': case '{': case '[':
                st.push(c);
                break;
            case ')':
                if(st.size()>0 && st.top() == '('){
                    st.pop();
                }
                else{
                    ans = false;
                }
                break;
            case '}':
                if(st.size()>0 && st.top() == '{'){
                    st.pop();
                }
                else{
                    ans = false;
                }
                break;
            case ']':
                if(st.size()>0 && st.top() == '['){
                    st.pop();
                }
                else{
                    ans = false;
                }
                break;
        }
    }
    if(ans && st.size()==0){
        cout << "VALID" << endl;
    }
    else{
        cout << "INVALID" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    validParentheses();
    return 0;
}
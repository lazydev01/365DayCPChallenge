#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void insert(stack<int> &s, int n){
    if(s.empty() || n > s.top()){
        s.push(n);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s, n);
    s.push(temp);
    return;
}

void sortStack(stack<int> &s){
    if(s.size() == 1){
        return;
    }
    int temp = s.top();
    s.pop();
    sortStack(s);
    insert(s, temp);
    return;
}

void sortAStack(){
    int n;
    cin >> n;
    stack<int> s;
    for(int i=0; i<n; i++){
        int j;
        cin >> j;
        s.push(j);
    }
    sortStack(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sortAStack();
    return 0;
}
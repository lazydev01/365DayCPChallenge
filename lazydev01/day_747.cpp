#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void jellyfishAndUndertale(){
    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        int ans = b;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            ans += min(a-1, arr[i]);
        }
        cout << ans << endl;
    }
}

// Implement Stack using Array

struct MyStack {
    int arr[1000];
    int top = -1;
};

void push(struct MyStack* stack, int a) {
    stack->arr[(stack->top)+1] = a;
    stack->top++;
}

// Function to pop an item from the top of the stack
int pop(struct MyStack* stack) {
    if(stack->top==-1){
        return stack->top;
    }
    stack->top--;
    return stack->arr[(stack->top)+1];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    jellyfishAndUndertale();
    return 0;
}
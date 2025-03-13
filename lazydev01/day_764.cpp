#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int sumOfDigits(int num){
    int sum = 0;
    while(num>0){
        sum += (num%10);
        num = num / 10;
    }
    return sum;
}

void vladAndASumOfSumOfDigits(){
    int t;
    cin >> t;
    vector<int> arr(200000);
    arr[0] = 1;
    for(int i=2; i<=200000; i++){
        arr[i-1] = arr[i-2] + sumOfDigits(i);
    }
    while(t--){
        int n;
        cin >> n;
        cout << arr[n-1] << endl;
    }
}

// Implement Queue using Stack

class MyQueue {
public:
    stack<int> input, output;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        int firstEl = output.top();
        output.pop();
        return firstEl;
    }
    
    int peek() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        return output.size() + input.size() == 0;
    }
};

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vladAndASumOfSumOfDigits();
    return 0;
}
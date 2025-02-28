#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gamingForces(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int ones = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==1){
                ones++;
            }
        }
        int ans = n;
        ans-=(ones/2);
        cout << ans << endl;

    }
}

// Implement Queue using Array

class MyQueue {
    private:
        int arr[100005];
        int front;
        int rear;
    
    public :
        MyQueue(){front=0;rear=0;}
        void push(int);
        int pop();
};

// Function to push an element x in a queue.
void MyQueue ::push(int x) {
    arr[rear++] = x;
}

// Function to pop an element from queue and return that element.
int MyQueue ::pop() {
    if(front==rear){
        return -1;
    }
    return arr[front++];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    gamingForces();
    return 0;
}
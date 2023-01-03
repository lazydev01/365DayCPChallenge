/*

Question -> https://www.codechef.com/problems/AVG

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, v;
        cin >> n >> k >> v;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int summation = accumulate(arr.begin(), arr.end(), 0);
        int total = (v*(n+k))-summation;
        if(total<=0){
            cout << -1 << endl;
        }
        else{
            if(total%k==0){
                cout << total/k << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
    return 0;
}

/*


Formulating

average = sum/number of elements
number of elements = n+k
Given average = v
So, sum = (n+k)*v
We are given n elements.So, we can find sum of n elements
Therefore, sum of n elements + sum of k elements = (n+k)*v
sum of k elements = ((n+k)*v)-sum of n elements
Also, we are given that all the k elements have same value
So, k*value = (((n+k)*v)-sum of n elements)
Hence, value =  (((n+k)*v)-sum of n elements)/k
And applying the constraints we get the answer(k is a positive integer so needs to be a natural number)


*/
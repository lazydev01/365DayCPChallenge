#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeAllEqual(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int maxi = INT_MIN;
        for(auto i : mp){
            maxi = max(maxi, i.second);
        }
        cout << n - maxi << endl;
    }
}

void kthPermutationSequence(){
    int n, k;
    cin >> n >> k;
    string ans = "";
    int fact = 1;
    vector<int> numbers;
    for(int i=1; i<=n; i++){
        fact = fact * i;
        numbers.push_back(i);
    }
    k--;
    fact = fact / n;
    while(numbers.size()!=0){
        ans = ans + to_string(numbers[k/fact]);
        numbers.erase(numbers.begin() + (k/fact));
        k = k%fact;
        if(numbers.size()!=0){
            fact = fact / numbers.size();
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // makeAllEqual();
    kthPermutationSequence();
    return 0;
}

/*

1234
1243
1324
1342
1423
1432

2134
2143
2314
2341
2413
2431

3124
3142
3214
3241
3412
3421

4123
4132
4213
4231
4312
4321


*/
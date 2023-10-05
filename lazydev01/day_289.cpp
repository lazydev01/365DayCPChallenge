#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void problemD(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> left(k);
        vector<int> right(k);
        for(int i=0; i<k; i++){
            cin >> left[i];
        }
        for(int i=0; i<k; i++){
            cin >> right[i];
        }
        int q;
        cin >> q;
        vector<int> queries(q);
        for(int i=0; i<q; i++){
            cin >> queries[i];
        }
        map<int, int> mp;
        for(int i=0; i<q; i++){
            mp[queries[i]]++;
        }

        for(auto i : mp){
            int ind = lower_bound(left.begin(), left.end(), i.first) - left.begin() - 1;
            int mini = min(i.second, mp[left[ind] + right[ind] - i.first]);
            mp[i.first] -= mini;
            mp[left[ind] + right[ind] - i.first] -= mini;
            if(mp[i.first]%2==0){
                mp[i.first]=0;
            }
            if(mp[left[ind] + right[ind] - i.first]%2==0){
                mp[left[ind] + right[ind] - i.first]=0;
            }
        }
        vector<int> final_q;
        for(auto i: mp){
            if(i.second > 0){
                final_q.push_back(i.first);
            }
        }
        for(auto i : final_q){
            cout << i << endl;
        }
        for(int i=0; i<final_q.size(); i++){
            int ind = lower_bound(left.begin(), left.end(), final_q[i]) - left.begin();
            int left_pointer = min(final_q[i], left[ind] + right[ind] - final_q[i]);
            int right_pointer = max(final_q[i], left[ind] + right[ind] - final_q[i]);
            cout << left_pointer << " " << right_pointer << endl;
            reverse(s.begin()+left_pointer-1, s.begin() + right_pointer);
        }
        cout << s << endl;
    }
}

void fence(){
    int n, k;
    cin >> n >> k;
    int sum_k = 0;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i<k){
            sum_k += arr[i];
        }
    }
    vector<int> sum_arr;
    sum_arr.push_back(sum_k);
    int i = 0;
    int j = k;
    while(j<n){
        sum_k-=arr[i];
        sum_k+=arr[j];
        j++;
        i++;
        sum_arr.push_back(sum_k);
    }
    int ans = INT_MAX;
    int ind = -1;
    for(int i=0; i<sum_arr.size(); i++){
        if(sum_arr[i]<ans){
            ans = sum_arr[i];
            ind = i;
        }
    }
    cout << ind+1 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // problemD();
    fence();
    return 0;
}
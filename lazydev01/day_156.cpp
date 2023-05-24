#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sumOfTwoNumbersEqualToTarget(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    bool flag = false;
    for(auto i : m){
        int toFind = target - i.first;
        if(toFind == i.first && i.second > 1){
            flag = true;
            break;
        }
        else{
            if(m.find(toFind) != m.end())
            {
                flag = true;
                break;
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void sumOfTwoNumbersEqualToTargetReturnIndex(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> m;
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(m.find(target-arr[i])!=m.end()){
            ans.push_back(m.find(target-arr[i])->second);
            ans.push_back(i);
            break;
        }
        else{
            m[arr[i]] = i;
        }
    }
    if(ans.size() > 0){
        cout << ans[0] << " " << ans[1] << endl; 
    }
    else{
        cout << 0 << " " << 0 << endl;
    }
}

void sumOfTwoNumbersEqualToTargetOptimal(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = n-1;
    bool flag = false;
    while(start<end){
        if((arr[start] + arr[end]) == target){
            flag = true;
            break;
        }
        else if((arr[start] + arr[end]) > target){
            end--;
        }
        else{
            start++;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // sumOfTwoNumbersEqualToTarget();
    // sumOfTwoNumbersEqualToTargetReturnIndex();
    sumOfTwoNumbersEqualToTargetOptimal();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rearrangeElementsBySign(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans(n);
    int pos_index = 0;
    int neg_index = 1;
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            ans[pos_index] = arr[i];
            pos_index+=2;
        }
        else{
            ans[neg_index] = arr[i];
            neg_index+=2;
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

void rearrangeElementsBySignVariety2(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> pos;
    vector<int> neg;
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    if(pos.size() > neg.size()){
        for(int i=0; i<neg.size(); i++){
            ans[2*i] = pos[i];
            ans[2*i+1] = neg[i];
        }
        for(int i=0; i<pos.size()-neg.size(); i++){
            ans[i+(2*neg.size())] = pos[i+neg.size()];
        }
    }
    else{
        for(int i=0; i<pos.size(); i++){
            ans[2*i] = pos[i];
            ans[2*i+1] = neg[i];
        }
        for(int i=0; i<neg.size()-pos.size(); i++){
            ans[i+(2*pos.size())] = neg[i+pos.size()];
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    rearrangeElementsBySignVariety2();
    return 0;
}
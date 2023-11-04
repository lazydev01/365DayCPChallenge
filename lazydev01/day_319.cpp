#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

    6
    001110

    1011
    

*/

void qingshanLovesString2(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n%2!=0){
            cout << -1 << endl;
        }
        else{
            int count_zero = 0;
            int count_one = 0;
            for(auto i : s){
                if(i=='0') count_zero++;
                else count_one++;
            }
            if(count_zero!=count_one){
                cout << -1 << endl;
            }
            else{
                deque<char> dq;
                for(auto i : s){
                    dq.push_back(i);
                }
                int index = 0;
                vector<int> ans;
                while(dq.size()!=0){
                    if(dq.front()!=dq.back()){
                        dq.pop_back();
                        dq.pop_front();
                    }
                    else if(dq.front()=='0'){
                        dq.pop_front();
                        dq.push_back('0');
                        ans.push_back(index + dq.size());
                    }
                    else{
                        dq.pop_back();
                        dq.push_front('1');
                        ans.push_back(index);
                    }
                    index++;
                }
                cout << ans.size() << endl;
                for(auto i : ans){
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    qingshanLovesString2();
    return 0;
}
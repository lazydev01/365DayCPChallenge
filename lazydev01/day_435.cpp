#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void fileName(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int count_x = 0;
    for(auto i : s){
        if(i=='x'){
            count_x++;
            if(count_x>=3){
                count++;
            }
        }
        else{
            count_x = 0;
        }
    }
    cout << count << endl;
}

int calcPower2(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans * 2;
    }
    return ans;
}

void transformationCost(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int last_one_index = -1;
        int log_n = log2(n);
        int flag = 1;
        int ans = 0;
        bool flag2 = false;
        for(int i=0; i<=log_n; i++){
            if((n & flag)){
                if(!flag2){
                    last_one_index = i;
                    flag2 = true;
                }
            }
            else{
                if(last_one_index!=-1){
                    ans += calcPower2(last_one_index);
                    last_one_index=i;
                }
            }
            flag = flag << 1;
        }
        cout << ans << endl;

    }
}

int32_t main(){
    // fileName();
    transformationCost();
    return 0;
}


/*
1010100011010111






*/
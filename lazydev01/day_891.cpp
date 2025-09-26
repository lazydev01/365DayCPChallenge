#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeProductEqualOne(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int ans = 0;
    int count_neg_one = 0;
    bool hasZero = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 0) hasZero = true;
        int diff_pos = abs(arr[i] - 1);
        int diff_neg = abs(arr[i] - (-1));
        if(diff_neg < diff_pos){
            count_neg_one++;
        }
        ans += min(diff_pos, diff_neg);
    }
    if(count_neg_one%2 == 1 && !hasZero){
        ans += 2;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeProductEqualOne();
    return 0;
}

class Solution {
public:
    int compareVersion(string version1, string version2) {
        string revision1 = "";
        string revision2 = "";
        int i = 0;
        int j = 0;
        while(i < version1.size() || j < version2.size()){
            if(i >= version1.size() && j < version2.size() && version2[j] == '.'){
                if(stoi(revision1) > stoi(revision2)) return 1;
                else if(stoi(revision2) < stoi(revision2)) return -1;
                i++;
                j++;
                revision2 = "";
            }
            else if(j >= version2.size() && i < version1.size() && version1[i] == '.'){
                if(stoi(revision1) > stoi(revision2)) return 1;
                else if(stoi(revision1) < stoi(revision2)) return -1;
                i++;
                j++;
                revision1 = "";
            }
            if(i < version1.size() && version1[i] == '.' && j < version2.size() && version2[j] == '.'){
                if(stoi(revision1) > stoi(revision2)) return 1;
                else if(stoi(revision1) < stoi(revision2)) return -1;
                i++;
                j++;
                revision1 = "";
                revision2 = "";
            }
            else if(i < version1.size() && version1[i] != '.'){
                revision1 += version1[i];
                i++;
            }
            else if(j < version2.size() && version2[j] != '.'){
                revision2 += version2[j];
                j++;
            }
            if(i > version1.size()){
                revision1 = "0";
            }
            if(j > version2.size()){
                revision2 = "0";
            }
        }
        if(stoi(revision1) > stoi(revision2)){
            return 1;
        }
        else if(stoi(revision1) < stoi(revision2)) return -1;
        return 0;
    }
};
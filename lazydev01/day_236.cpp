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

    Codeforces Round 892 (Div. 2)

*/

void problemA(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> arrB;
        vector<int> arrC;
        int maxEle = *max_element(arr.begin(), arr.end());
        int minEle = *min_element(arr.begin(), arr.end());
        if(maxEle == minEle){
            cout << -1 << endl;
        }
        else{
            for(int i=0; i<arr.size(); i++){
                if(arr[i]!=maxEle){
                    arrB.push_back(arr[i]);
                }
                else{
                    arrC.push_back(arr[i]);
                }
            }
            cout << arrB.size() << " " << arrC.size() << endl;
            for(int i=0; i<arrB.size(); i++){
                cout << arrB[i] << " ";
            }
            cout << endl;
            for(int i=0; i<arrC.size(); i++){
                cout << arrC[i] << " ";
            }
            cout << endl;
        }
    }
}

int calcSecondMax(vector<int> &arr){
    int mini = LONG_MAX;
    int second_mini = LONG_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < mini) {
            second_mini = mini;
            mini = arr[i];
        }
        else if (arr[i] < second_mini){
            second_mini = arr[i];
        }   
    }
    return second_mini;
}
void problemB(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> arrs;
        vector<int> secondMiniArr(n);
        int minimumNumber = LONG_MAX;
        for(int i=0; i<n; i++){
            int m;
            cin >> m;
            vector<int> arr(m);
            for(int i=0; i<m; i++){
                cin >> arr[i];
                minimumNumber = min(minimumNumber, arr[i]);
            }
            secondMiniArr[i] = calcSecondMax(arr);
            cout << secondMiniArr[i] << endl;
            arrs.push_back(arr);
        }
        cout << (accumulate(secondMiniArr.begin(), secondMiniArr.end(), 0)-*min_element(secondMiniArr.begin(), secondMiniArr.end()) + minimumNumber) << endl;
    }
}




int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // problemA();
    problemB();
    return 0;
}
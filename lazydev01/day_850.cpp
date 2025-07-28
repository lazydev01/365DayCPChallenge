#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cardboardForPictures(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> pictures(n);
        for(int i = 0; i < n; i++){
            cin >> pictures[i];
        }
        int start = 1;
        int end = 1e9;
        bool solved = false;
        while(start <= end){
            int mid = (start + end) / 2;
            int sum = 0;
            for(int i = 0; i < n; i++){
                sum += (pictures[i] + (2 * mid)) * (pictures[i] + (2 * mid));
                if(sum > c){
                    end = mid - 1;
                    break;
                }
            }
            if(sum == c){
                solved = true;
                cout << mid << endl;
                break;
            }
            else if(sum < c){
                start = mid + 1;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cardboardForPictures();
    return 0;
}

/*

3 50
3 2 1

(3 + 2x)^2 + (1 + 2x)^2 + (2 + 2x)^2 = 50 

4x^2 + 9 + 12x + 4x^2 + 1 + 4x + 4x2 + 4 + 8x = 50

12x^2 + 24x = 36

x^2 + 2x = 3

x^2 + 2x - 3 = 0

x^2 + 3x - x - 3 = 0

x = 1

*/
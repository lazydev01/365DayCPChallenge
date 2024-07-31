#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mostSimilarWords(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for(int i=0; i<n; i++){
            cin >> words[i];
        }
        int min_count = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int count = 0;
                for(int k=0; k<m; k++){
                    if(words[i][k] > words[j][k]){
                        count += words[i][k] - words[j][k];
                    }
                    else if(words[i][k] < words[j][k]){
                        count += words[j][k] - words[i][k];
                    }
                }
                min_count = min(count, min_count);
            }
        }
        cout << min_count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mostSimilarWords();
    return 0;
}
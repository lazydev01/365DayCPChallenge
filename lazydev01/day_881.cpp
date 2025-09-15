#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yetAnotherCardDeck(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> queries(q);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }
    vector<int> cards(51);
    for(int i = 0; i < n; i++){
        if(cards[arr[i]] == 0){
            cards[arr[i]] = i+1;
        }
    }
    for(int i = 0; i < q; i++){
        cout << cards[queries[i]] << " ";
        for(int j = 0; j < cards.size(); j++){
            if(cards[j] < cards[queries[i]]){
                cards[j]++;
            }
        }
        cards[queries[i]] = 1;
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    yetAnotherCardDeck();
    return 0;
}
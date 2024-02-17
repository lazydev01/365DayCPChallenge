#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void legSpace(){
    int n, m;
    cin >> n >> m;
    cout << (n==m ? "NO" : "YES") << endl;
}

void theManCode(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << (n/2) + (n%2) << " " << (n/3) + (n%3!=0) << endl;
  }
}

void antiAdjacentSwaps(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    if(n==1 || n>=4){
      cout << "YES" << endl;
    }
    else{
      vector<int> arr_2 = arr;
      sort(arr_2.begin(), arr_2.end());
      if(arr[n/2] == arr_2[n/2]){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // legSpace();
    // theManCode();
    antiAdjacentSwaps();
    return 0;
}

/*

4 3 2 1
1 2 4 3

4 2 1 3
3 2 1 4

1 2 3 4
1 2 3 4 5
1 5 2 4 3
1 5 3 4 2
1 2 3 4 5

1 3 2 4
3 1 2 4
2 1 3 4
2 4 3 1
1 4 3 2
1 2 3 4

1 3 2
2 3 1

3 2 1

1 2 3 4

1 2 4 3
3 2 4 1
4 2 3 1
1 2 3 4

1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1






*/
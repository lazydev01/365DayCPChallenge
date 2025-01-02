#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cakeminator(){
    int r, c;
    cin >> r >> c;
    vector<string> cake(r);
    for(int i=0; i<r; i++){
        cin >> cake[i];
    }
    vector<bool> freeRows(r, true);
    vector<bool> freeCols(c, true);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(cake[i][j]=='S'){
                freeRows[i] = false;
                freeCols[j] = false;
            }
        }
    }
    int numOfFreeRows = 0;
    int numOfFreeCols = 0;
    for(int i=0; i<r; i++){
        if(freeRows[i]){
            numOfFreeRows++;
        }
    }
    for(int i=0; i<c; i++){
        if(freeCols[i]){
            numOfFreeCols++;
        }
    }
    cout << ((numOfFreeRows*c) + (numOfFreeCols * r) - (numOfFreeCols * numOfFreeRows)) << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cakeminator();
    return 0;
}
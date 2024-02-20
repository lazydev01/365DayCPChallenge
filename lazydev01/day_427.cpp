#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

int calcPair(int n){
    return (((n)*(n-1))/2);
}

void randomTeams(){
    int n, m;
    cin >> n >> m;
    int minTeams = calcPair((n/m)+1)*(n%m) + (calcPair(n/m) * (m - (n%m)));
    int maxTeams = calcPair(n-m+1);
    cout << minTeams << " " << maxTeams << endl; 

}

int32_t main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    randomTeams();
    return 0;
}
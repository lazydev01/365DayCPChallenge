/*

    Question -> https://www.codechef.com/problems/HOTEL

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

int main(){
     #ifndef ONLINE_JUDGE
       freopen("../input.txt","r",stdin); 
       freopen("../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
    	int n;
    	cin>>n;

    	vector<int> arr(1000,0);

    	int time;
    	for(int i=0;i<n;i++){
    		cin>>time;
    		arr[time]++;
    	}

    	for(int i=0;i<n;i++){
    		cin>>time;
    		arr[time]--;
    	}

    	int max = arr[1];
    	for(int i=2;i<=1000;i++){
    		arr[i] = arr[i]+arr[i-1];

    		if(arr[i]>max) max=arr[i];
    	}

    	cout<<max<<'\n';

    }
}

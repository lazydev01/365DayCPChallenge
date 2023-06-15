#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void missingAndRepeatingNumberMath(){
  int n;
  cin >> n;
  vector<int> arr(n);
  int s = 0;
  int s2 = 0;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    s+=arr[i];
    s2+=(arr[i]*arr[i]);
  }
  int sn = (n*(n+1))/2;
  int eq1 = s - sn;
  int s2n = (n*(n+1)*((2*n)+1))/6;
  int eq2 = s2 - s2n;
  int eq3 = eq2/eq1;
  int repeating = (eq1 + eq3)/2;
  int missing = repeating - eq1;
  cout << missing << " " << repeating << endl;
}

void missingAndRepeatingNumberXor(){
  int n;
  cin >> n;
  vector<int> arr(n);
  int xr = 0;
  for(int i=0; i<n; i++){
    cin >> arr[i];
    xr^=arr[i];
    xr^=(i+1);
  }
  int bitNo = 0;
  while(true){
    if((xr & (1<<bitNo))!=1){
      break;
    }
    bitNo++;
  }
  int zero = 0;
  int one = 0;
  for(int i=0; i<n; i++){
    if((arr[i]&(1<<bitNo))==0){
      zero = zero ^ arr[i];
    }
    else{
      one = one ^ arr[i];
    }
  }
  for(int i=1; i<=n; i++){
    if((i&(1<<bitNo))==0){
      zero = zero ^ i;
    }
    else{
      one = one ^ i;
    }
  }
  int cnt = 0;
  for(int i = 0; i<n; i++){
    if(arr[i]==zero){
      cnt++;
    }
  }
  if(cnt == 2){
    cout << zero << " " << one << endl;
  }
  else{
    cout << one << " " << zero << endl;
  }
  
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // missingAndRepeatingNumberMath();
    missingAndRepeatingNumberXor();
    return 0;
}
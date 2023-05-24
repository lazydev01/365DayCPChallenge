int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    int start = 0;
    int sum = 0;
    int count = 0;
    int maxCount = 0;
    for(int i=0; i<n; i++){
      sum+=arr[i];
      if(sum > k){
        sum-=arr[start];
        start++;
      }
      if(sum==k){
        count = i-start+1;
        maxCount = max(maxCount,count);
      }
    }
    cout << maxCount << endl;
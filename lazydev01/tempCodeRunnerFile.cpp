int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int j=0; j<m; j++){
        cin >> arr2[j];
    }
    int i=0;
    int j=0;
    vector<int> intersectArr;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            if(intersectArr.size()==0 || arr1[i]!=intersectArr.back()){
                intersectArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int i=0; i<intersectArr.size(); i++){
        cout << intersectArr[i] << " ";
    }
    cout << endl;
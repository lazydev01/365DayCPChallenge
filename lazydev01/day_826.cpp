    #include <bits/stdc++.h>
    using namespace std;

    #ifdef ONLINE_JUDGE
    #define cerr if(0) cerr
    #endif

    #define int long long int
    #define endl "\n"
    #define YES cout<<"YES\n"
    #define NO cout<<"NO\n"

    const int mxN = ((1<<17)+1);

    struct segmentNode{
        int level;
        int value;
    };

    struct segmentNode segmentTree[4*mxN];
    int arr[mxN];

    void buildSegmentTree(int start, int end, int index){
        if(start > end) return;
        if(start == end){
            segmentTree[index].level = 1;
            segmentTree[index].value = arr[start];
            return;
        }
        int mid = (start + end) / 2;
        buildSegmentTree(start, mid, 2 * index);
        buildSegmentTree(mid + 1, end, 2 * index + 1);
        segmentTree[index].level = segmentTree[2*index].level + 1;
        if(segmentTree[index].level % 2){
            segmentTree[index].value = segmentTree[2*index].value ^ segmentTree[2 * index + 1].value;
        }
        else{
            segmentTree[index].value = segmentTree[2*index].value | segmentTree[2 * index + 1].value;
        }
    }

    void updateSegmentTree(int pos, int val, int start, int end, int index){
        if(start > end) return;
        if(start == end){
            segmentTree[index].value = val;
            return;
        }
        int mid = (start + end) / 2;
        if(pos >= start && pos <= mid){
            updateSegmentTree(pos, val, start, mid, 2 * index);
        }
        else{
            updateSegmentTree(pos, val, mid + 1, end, 2 * index + 1);
        }
        if((segmentTree[index].level) % 2){
            segmentTree[index].value = segmentTree[2 * index].value ^ segmentTree[2 * index + 1].value;
        }
        else{
            segmentTree[index].value = segmentTree[2 * index].value | segmentTree[2 * index + 1].value;
        }
    }

    void xeniaAndBitOperations(){
        int n, m;
        cin >> n >> m;
        int len = 1;
        for(int i = 0; i < n; i++){
            len*=2;
        }
        for(int i = 0; i < len; i++){
            cin >> arr[i];
        }
        buildSegmentTree(0, len-1, 1);
        while(m--){
            int p, b;
            cin >> p >> b;
            updateSegmentTree(p-1, b, 0, len-1, 1);
            cout << segmentTree[1].value << endl;
        }
    }

    int32_t main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        xeniaAndBitOperations();
        return 0;
    }
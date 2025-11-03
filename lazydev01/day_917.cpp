#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lasers(){
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a < y){
                ans++;
            }
        }
        for(int i = 0; i < m; i++){
            int b;
            cin >> b;
            if(b < x){
                ans++;
            }
        }
        cout << ans << endl;
    }
}

struct TreeNode {
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(TreeNode* l, TreeNode* r, int data) : left(l), right(r), val(data) {}
    TreeNode(int data) : left(NULL), right(NULL), val(data) {}
};

bool hasPath(TreeNode* node, int targetValue, vector<int> &ans){
    if(node == NULL){
        return false;
    }
    ans.push_back(node->val);
    if (node->val == targetValue)    
        return true;
    if(hasPath(node->left, targetValue, ans) || hasPath(node->right, targetValue, ans)){
        return true;
    }
    ans.pop_back();
    return false;
}

vector<int> getRootToNodePath(TreeNode* root, int targetValue){
    vector<int> ans;
    if(hasPath(root, targetValue, ans)){
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i];
            if(i < ans.size() - 1){
                cout << " -> ";
            }
        }
        cout << endl;
    }
    else{
        cout << "No Path found" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    TreeNode* one = new TreeNode(1);
    TreeNode* two = new TreeNode(2);
    TreeNode* three = new TreeNode(3);
    TreeNode* four = new TreeNode(4);
    TreeNode* five = new TreeNode(5);
    TreeNode* six = new TreeNode(6);
    TreeNode* seven = new TreeNode(7);
    one->left = two;
    one->right = three;
    two->left = four;
    two->right = five;
    three->left = six;
    three->right = seven;
    getRootToNodePath(one, 7);
    return 0;
}
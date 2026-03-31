#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void drazilAndFactorial(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> digits;
    map<int, vector<int>> primeFactorsMp;
    primeFactorsMp[2].push_back(2);
    primeFactorsMp[3].push_back(3);
    primeFactorsMp[4].push_back(2);
    primeFactorsMp[4].push_back(2);
    primeFactorsMp[4].push_back(3);
    primeFactorsMp[5].push_back(5);
    primeFactorsMp[6].push_back(3);
    primeFactorsMp[6].push_back(5);
    primeFactorsMp[7].push_back(7);
    primeFactorsMp[8].push_back(2);
    primeFactorsMp[8].push_back(2);
    primeFactorsMp[8].push_back(2);
    primeFactorsMp[8].push_back(7);
    primeFactorsMp[9].push_back(7);
    primeFactorsMp[9].push_back(2);
    primeFactorsMp[9].push_back(3);
    primeFactorsMp[9].push_back(3);
    while(x > 0){
        if(x % 10 > 1){
            digits.insert(digits.end(), primeFactorsMp[x%10].begin(), primeFactorsMp[x%10].end());
        }
        x/=10;
    }
    sort(digits.begin(), digits.end(), greater<int>());
    string ans = "";
    for(auto i : digits){
        ans += '0' + i;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    drazilAndFactorial();
    return 0;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

 struct TreeNode {
      int data;
      TreeNode *left;
      TreeNode *right;
       TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
  };

class Solution{
	public:
		vector<int> succPredBST(TreeNode* root, int key){
			TreeNode* successor = NULL;
            TreeNode* predecessor = NULL;

            TreeNode* temp = root;
            while(temp != NULL){
                if(key >= temp->data){
                    temp = temp->right;
                }
                else{
                    successor = temp;
                    temp = temp->left;
                }
            }

            temp = root;
            while(temp != NULL){
                if(key <=  temp->data){
                    temp = temp->left;
                }
                else{
                    predecessor = temp;
                    temp = temp->right;
                }
            }
            vector<int> ans;
            if(predecessor == NULL){
                ans.push_back(-1);
            }
            else{
                ans.push_back(predecessor->data);
            }
            if(successor == NULL){
                ans.push_back(-1);
            }
            else{
                ans.push_back(successor->data);
            }
            return ans;
		}
};
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void quintomania(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool isPerfect = true;
        for(int i=0; i<n-1; i++){
            if(abs(arr[i]-arr[i+1])!=5 && abs(arr[i]-arr[i+1])!=7){
                isPerfect = false;
                break;
            }
        }
        if(isPerfect){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

void findValidSentences(int index, string currWord, string currSentence, string word, vector<string> dictionary, vector<string> &ans){
    if(index==word.size()){
        if(currWord==""){
            ans.push_back(currSentence.substr(0, currSentence.size()-1));
        }
        return;
    }
    string tempCurrWord = currWord;
    currWord += word[index];
    if(find(dictionary.begin(), dictionary.end(), currWord)!=dictionary.end()){
        findValidSentences(index+1, "", currSentence + currWord + " ", word, dictionary, ans);
    }
    findValidSentences(index+1, currWord, currSentence, word, dictionary, ans);
}

void wordBreak2(){
    int n;
    cin >> n;
    vector<string> dictionary(n);
    for(int i=0; i<n; i++){
        cin >> dictionary[i];
    }
    string word;
    cin >> word;
    vector<string> ans;
    findValidSentences(0, "", "", word, dictionary, ans);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // quintomania();
    wordBreak2();
    return 0;
}
/*

Question -> https://www.codechef.com/problems/CVOTE

*/

#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for(int i=0; i<n; i++){
        string name;
        string country;
        cin >> name;
        cin >> country;
        mp[name]=country;
    }
    vector<string> v;
    for(int i=0; i<m; i++){
        string vote;
        cin >> vote;
        v.push_back(vote);
    }
    map<string, int> name_with_frequency;
    map<string, int> country_with_frequency;
    for(int i=0; i<v.size(); i++){
        name_with_frequency[v[i]]++;
    }
    for(int i=0; i<v.size(); i++){
        country_with_frequency[mp[v[i]]]++;
    }
    int maximum_name = INT_MIN;
    int maximum_country = INT_MIN;
    for(auto i: name_with_frequency){
        if(maximum_name < i.second){
            maximum_name = i.second;
        }
    }
    for(auto i: country_with_frequency){
        if(maximum_country < i.second){
            maximum_country = i.second;
        }
    }
    vector<string> names;
    vector<string> countries;
    for(auto i: name_with_frequency){
        if(i.second==maximum_name){
            names.push_back(i.first);
        }
    }
    for(auto i: country_with_frequency){
        if(i.second==maximum_country){
            countries.push_back(i.first);
        }
    }
    sort(countries.begin(), countries.end());
    sort(names.begin(), names.end());
    cout << countries[0] << endl;
    cout << names[0] << endl;
    return 0;
}
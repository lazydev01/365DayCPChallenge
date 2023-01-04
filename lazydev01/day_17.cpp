/*

Question -> https://www.codechef.com/problems/CFMM

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

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        map<char, int> m;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            for(int j=0; j<s.size(); j++){
                m[s[j]]++;
            }
        }
        int meal_count = INT_MAX;
        int c_count = m['c']/2;
        if(meal_count>c_count){
            meal_count=c_count;
        }
        int o_count = m['c']/1;
        if(meal_count>o_count){
            meal_count=o_count;
        }
        int d_count = m['d']/1;
        if(meal_count>d_count){
            meal_count = d_count;
        }
        int e_count = m['e']/2;
        if(meal_count>e_count){
            meal_count = e_count;
        }
        int h_count = m['h']/1;
        if(meal_count>h_count){
            meal_count = h_count;
        }
        int f_count = m['f']/1;
        if(meal_count>f_count){
            meal_count = f_count;
        }
        cout << meal_count << endl;
    }
    return 0;
}

/*
Dictionary of the word Codechef
codechef -> {'c':2, 'o':1, 'd':1, 'e':2, 'h':1, 'f':1}

Firstly, as it is said in the question that all the ingredients gets mixed up, So, we make a dictionary which contains the frequency of all the mentioned strings given as input
We then take one variable named meal_count which points at infinity initially
Then we compare this meal_count with other variable frequencies present in codechef, i.e. c, o, d, e, h, f. As c and e appear twice in the string codechef, we divide the frequency by 2. And finally, we print the meal_count after comparison

In python, we define infinity as : - 
meal_count = float("inf")

Also one more hint: In python, dictionary doesnt have initial value as 0 for all the keys. So apart from the given strings, we need to make the value of c, o, d, e, h, f as 0 initially

Also to take n strings as input, 
We use this as syntax : 
for i in range(n):
    s = input()
    #Dictionary Code here
As there is no need to take the original string for later use, we do not use list(string) as we directly take the frequency of each character in our dictionary

*/
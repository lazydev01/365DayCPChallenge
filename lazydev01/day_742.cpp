#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
#define cerr \
    if (0)   \
    cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void chooseTheDifferentOnes()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr1(n), arr2(m);
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            mp1[arr1[i]] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            mp2[arr2[i]] = 1;
        }
        bool exists = true;
        int count1 = 0;
        int count2 = 0;
        for (int i = 1; i <= k; i++)
        {
            if (mp1.find(i) == mp1.end() && mp2.find(i) == mp2.end())
            {
                exists = false;
                break;
            }
            if (mp1.find(i) != mp1.end())
            {
                count1++;
            }
            if (mp2.find(i) != mp2.end())
            {
                count2++;
            }
        }
        if (!exists)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (count1 >= (k / 2) && count2 >= (k / 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    chooseTheDifferentOnes();
    return 0;
}
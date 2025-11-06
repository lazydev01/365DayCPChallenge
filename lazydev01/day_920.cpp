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

void paintTheArray()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int gcdEven = 0;
        int gcdOdd = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                gcdEven = arr[i];
            }
            else if (i == 1)
            {
                gcdOdd = arr[i];
            }
            else
            {
                if (i % 2 == 0)
                {
                    gcdEven = __gcd(gcdEven, arr[i]);
                }
                else
                {
                    gcdOdd = __gcd(gcdOdd, arr[i]);
                }
            }
        }
        if (gcdOdd == gcdEven)
        {
            cout << 0 << endl;
        }
        else
        {
            bool validEven = true, validOdd = true;

            for (int i = 1; i < n; i += 2)
                if (arr[i] % gcdEven == 0)
                    validEven = false;

            for (int i = 0; i < n; i += 2)
                if (arr[i] % gcdOdd == 0)
                    validOdd = false;

            if (validEven)
                cout << gcdEven << endl;
            else if (validOdd)
                cout << gcdOdd << endl;
            else
                cout << 0 << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    paintTheArray();
    return 0;
}
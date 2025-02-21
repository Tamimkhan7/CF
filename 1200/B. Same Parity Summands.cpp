#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << "YES\n"
                 << n << '\n';
            continue;
        }
        if (n < k)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> v;
        bool ok = false;

        if ((n % 2 == k % 2) and n >= k)
        {
            for (int i = 1; i < k; i++)
            {
                v.push_back(1);
                n--;
            }
            v.push_back(n);
            ok = true;
        }

        else if (n % 2 == 0 and n / 2 >= k)
        {
            for (int i = 1; i < k; i++)
            {
                v.push_back(2);
                n -= 2;
            }
            v.push_back(n);
            ok = true;
        }

        if (ok)
        {
            cout << "YES\n";
            for (auto x : v)
                cout << x << ' ';
            cout << '\n';
        }
        else
            cout << "NO\n";
    }
    return 0;
}

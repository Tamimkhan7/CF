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
        int n, x;
        cin >> n >> x;
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            if (y & 1)
                odd++;
            else
                even++;
        }

        // for (auto [x, y] : mp)
        //     cout << x << ' ' << y << '\n';
        while (odd > 2 and x > 2)
        {
            odd -= 2;
            x -= 2;
        }
        if (odd > 0 and x > 0)
        {
            odd--;
            x--;
        }
        else
        {
            cout << "No\n";
            continue;
        }
        // show(x);
        while (even > 0 and x > 0)
        {
            x--;
            even--;
        }
        if (x == 0)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}
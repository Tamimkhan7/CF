#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll int long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        int ans = 0, diff = 0;
        if (x >= y and k >= b)
        {
            diff = k - b + 1;
            ans += diff / y;
        }
        else if (y >= x and k >= a)
        {
            diff = k - a + 1;
            ans += diff / x;
        }
        // cout << ans << '\n';
        k -= diff;
        diff = 0;
        if (k >= b)
        {
            int xp = k - (b - 1);
            diff = max(xp, (b - 1));
            ans += diff / y;
        }
        else if (k >= a)
        {
            int xp = k - (a - 1);
            diff = max(xp, (a - 1));
            ans += diff / x;
        }
        k -= diff;

        cout << ans << '\n';
    }
    return 0;
}
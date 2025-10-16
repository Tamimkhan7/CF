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

void solve()
{
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    int ans = 0;
    if (k >= a || k >= b)
    {
        if (x <= y)
        {
            int res = (k - a) / x;
            ans = res + 1;
            k -= res * x;
            //  show(k);
            if (k >= b)
                ans += (k - b) / y;
        }
        else if (y <= x)
        {
            int res = (k - b) / y;
            ans = res + 1;
            k -= b * y;
            if (k >= a)
                ans += (k - a) / x;
        }
        else
            ans++;
    }
    // else if (k >= b)
    // {
    //     show(x), show(y);

    //     else ans++;
    // }
    cout << ans << '\n';
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
void solve()
{
    int x, y;
    cin >> x >> y;
    int p = 0, pre = 0, res = 0;
    while (y >= 0)
    {
        ll ans = x * pow(10, p);
        if (ans > y)
        {
            res += (y / pre);
            y -= (pre * res);
            p = -1;
        }

        pre = ans;
        p++;
    }
    // cout << y << ' ' << p << "\n";

    cout << res << '\n';
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
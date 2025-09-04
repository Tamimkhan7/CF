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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mx = max(a, b);
    int mn = min(a, b);
    int res = mn * 2;
    if (res + 2 < mx)
    {
        cout << "NO\n";
        return;
    }

    mx = max(c - a, d - b);
    mn = min(c - a, d - b);
    res = mn * 2;
    if (res + 2 < mx)
        cout << "NO\n";
    else
        cout << "YES\n";
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
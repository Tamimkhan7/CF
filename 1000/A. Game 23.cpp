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
    int n, m;
    cin >> n >> m;
    ll x = n;
    if (x == m)
    {
        cout << 0 << '\n';
        return 0;
    }
    int ans = 0;
    while (x <= m and m % x == 0)
    {
        ans++;
        // show(x);
        if (m % (x * 3) == 0)
            x *= 3;
        else if (m % (x * 2) == 0)
            x *= 2;
        if (x >= m || ans > 100)
            break;
    }
    if (x == m)
        cout << ans << '\n';
    else
        cout << -1 << '\n';
    return 0;
}
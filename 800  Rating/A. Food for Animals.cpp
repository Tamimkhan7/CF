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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (a >= x)
            x = 0;
        else
            x -= a;
        if (b >= y)
            y = 0;
        else
            y -= b;

        int ans = x + y;
        if (c >= ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
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
#define llu __int128
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        llu x_pow_6 = 1, y_pow_6 = 1;
        for (int i = 0; i < 6; i++)
            x_pow_6 = x_pow_6 * x;
        for (int i = 0; i < 6; i++)
            y_pow_6 = y_pow_6 * y;
        llu pow_6 = x_pow_6 - y_pow_6;

        llu x_pow_4 = 1, y_pow_4 = 1;
        for (int i = 0; i < 4; i++)
            x_pow_4 *= x;
        for (int i = 0; i < 4; i++)
            y_pow_4 *= y;
        llu pow_4 = x_pow_4 - y_pow_4;
        ll res = __gcd(pow_6, pow_4);
        cout << res << '\n';
    }

    return 0;
}
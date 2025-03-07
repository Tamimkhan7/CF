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
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        int mn = min(x, y);
        int mn_val = min(a, b);
        int aa = a, bb = b, xx = x, yy = y, nn = n;

        if (mn_val == aa)
        {
            if (aa >= xx and nn > 0)
            {
                int minus = aa - xx;
                if (minus >= nn)
                {
                    aa -= nn;
                    nn = 0;
                }
                else
                {
                    aa -= minus;
                    nn -= minus;
                }
            }
            if (nn > 0 and bb >= yy)
            {
                int minus = bb - yy;
                if (minus >= nn)
                {
                    bb -= nn;
                    nn = 0;
                }
                else
                {
                    bb -= minus;
                    nn -= minus;
                }
            }
        }
        else
        {
            if (nn > 0 and bb >= yy)
            {
                int minus = bb - yy;
                if (minus >= nn)
                {
                    bb -= nn;
                    nn = 0;
                }
                else
                {
                    bb -= minus;
                    nn -= minus;
                }
            }
            if (aa >= xx and nn > 0)
            {
                int minus = aa - xx;
                if (minus >= nn)
                {
                    aa -= nn;
                    nn = 0;
                }
                else
                {
                    aa -= minus;
                    nn -= minus;
                }
            }
        }

        ll ans2 = 1LL * aa * bb;
        if (mn == x)
        {
            if (a >= x and n > 0)
            {
                int minus = a - x;
                if (minus >= n)
                {
                    a -= n;
                    n = 0;
                }
                else
                {
                    a -= minus;
                    n -= minus;
                }
            }
            if (n > 0 and b >= y)
            {
                int minus = b - y;
                if (minus >= n)
                {
                    b -= n;
                    n = 0;
                }
                else
                {
                    b -= minus;
                    n -= minus;
                }
            }
        }
        else
        {
            if (n > 0 and b >= y)
            {
                int minus = b - y;
                if (minus >= n)
                {
                    b -= n;
                    n = 0;
                }
                else
                {
                    b -= minus;
                    n -= minus;
                }
            }
            if (a >= x and n > 0)
            {
                int minus = a - x;
                if (minus >= n)
                {
                    a -= n;
                    n = 0;
                }
                else
                {
                    a -= minus;
                    n -= minus;
                }
            }
        }
        // show(a), show(b);
        // show(x), show(y);
        // cout << endl;
        ll ans = 1LL * a * b;
        cout << min(ans, ans2) << '\n';
    }
    return 0;
}
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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        ll ans = 0, ans2 = 0;
        if (x >= 0 and y >= 0)
        {
            int mn = min(x, y);
            ans += 1LL * b * mn;
            ans2 += (1LL * a * mn) * 2;
            //show(ans);
            //show(ans2);
            if (x == mn)
            {
                y -= x, x = 0;
                if (y > 0)
                {
                    ans += 1LL * y * a;
                    ans2 += 1LL * y * a;
                }
            }
            else if (y == mn)
            {
                x -= y, y = 0;
                if (x > 0)
                {
                    ans += 1LL * x * a;
                    ans2 += 1LL * x * a;
                }
            }
            // show(ans);
        }
        else if (x < 0 and y < 0)
        {
            int mx = max(x, y);
            ans += 1LL * (abs(mx)) * b;
            ans2 += (1LL * (abs(mx)) * a) * 2;
            if (mx == x)
            {
                y += x, x = 0;
                if (y < 0)
                {
                    ans += 1LL * (abs(y)) * a;
                    ans2 += 1LL * (abs(y)) * a;
                }
            }
            else if (mx == y)
            {
                x += y, y = 0;
                if (x < 0)
                {
                    ans += 1LL * (abs(x)) * a;
                    ans2 += 1LL * (abs(x)) * a;
                }
            }
        }
        else
        {
            ans += 1LL * (abs(x)) * a;
            ans2 += 1LL * (abs(x)) * a;
            ans += 1LL * (abs(y)) * b;
            ans2 += 1LL * (abs(y)) * b;
        }
        cout << min(ans, ans2) << '\n';
    }
    return 0;
}
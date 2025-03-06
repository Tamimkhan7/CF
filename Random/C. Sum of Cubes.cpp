#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int n = cbrt(x) + 1;
        bool ok = false;

        for (int i = 1; i <= n; i++)
        {
            ll l = 1, r = n * 2;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                ll sum = (1LL * i * i * i) + (1LL * mid * mid * mid);

                if (sum == x)
                {
                    ok = true;
                    break;
                }
                else if (sum > x)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (ok)
                break;
        }

        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

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
    int n;
    cin >> n;
    ll ans = 0;
    int p = n;
    while (n > 1)
    {
        int pre = ans;
        for (int i = 2; i <= n; i++)
        {
            ans += 1LL * (i - 1) * 2 % mod;
            ans %= mod;
        }
        // cout << "curr ans : " << ans - pre << '\n';
        n--;
    }

    cout << ans * ans % mod << '\n';
    while (p > 1)
    // {
    //     int x = 1;
    //     for (int i = 2; i <= p; i++)
    //     {
    //         ans += 1LL * (i - 1) * 2 % mod;
    //         ans %= mod;
    //         x++;
    //     }
    //     p--;
    // }
    // show(x);
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
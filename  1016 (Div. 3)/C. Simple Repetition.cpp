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
    int n, k;
    cin >> n >> k;
    if (n > 2 and n % 2 == 0 || (n == 2 and k > 1) || (n == 1 and k == 1))
    {
        cout << "NO\n";
        return;
    }
    if (n == 1 and k == 2)
    {
        cout << "YES\n";
        return;
    }

    bool ok = true;
    if (k == 1)
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ok = false;
                break;
            }
        }
    }
    if (ok and k == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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
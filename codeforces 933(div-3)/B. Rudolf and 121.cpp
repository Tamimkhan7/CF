#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 2; i < n; i++)
    {
        if (a[i - 1] > 0 and a[i] >= 2 and a[i + 1] > 0)
        {
            int mid = min({a[i - 1], a[i + 1], a[i] / 2});
            a[i - 1] -= mid;
            a[i + 1] -= mid;
            a[i] -= mid * 2;
        }
    }
    bool ok = true;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 0)
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}

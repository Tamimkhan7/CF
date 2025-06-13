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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != (i + 1))
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << "YES\n";
        return;
    }
    reverse(all(v));

    int l = 1, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = (1LL * l + r) / 2;
        if (1LL * mid * n + 1 >= v[0])
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
    // show(ans);
    for (int i = 0, j = n; i < n; i++, j--)
        v[i] -= ans * j;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != (i + 1))
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
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
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1), vv;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        vv.push_back(v[i]);
    }
    sort(all(vv));
    for (int i = 0; i < n - 1; i++)
    {
        if (vv[i] == vv[i + 1])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    if (is_sorted(all(v)))
    {
        cout << "YES" << '\n';
        return;
    }
    int mn = *min_element(all(v));
    int mx = *max_element(all(v));

    if (v[0] > mn || mx > n)
    {
        cout << "NO" << '\n';
        return;
    }
    int x = 10000;
    while (x--)
        for (int i = 2; i < n; i++)
        {
            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                i = 1;
            }
        }

    if (is_sorted(all(v)))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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
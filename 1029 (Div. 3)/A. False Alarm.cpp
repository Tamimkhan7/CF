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
    int n, x;
    cin >> n >> x;
    bool ok = false;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int idx;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            idx = i;
            break;
        }
    }
    idx += x;
    for (int i = idx; i < n; i++)
    {
        if (v[i] == 1)
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
        solve();

    return 0;
}
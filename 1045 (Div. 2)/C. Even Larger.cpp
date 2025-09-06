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

    long long ans = 0;
    for (int i = 1; i < n; i += 2)
    {
        int x = v[i - 1] + (i + 1 < n ? v[i + 1] : 0);

        if (x >= v[i])
        {
            ans += x - v[i];

            if (i + 1 < n)
            {
                if (x - v[i] <= v[i + 1])
                    v[i + 1] -= (x - v[i]);
                else
                    v[i + 1] = 0;
            }
        }
        // show(i);
        // show(v[i]);
        // show(x);
        // show(ans);
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
    }
    cout << ans << '\n';
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
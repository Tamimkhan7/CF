#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 1;
    set<int> curr, pre;
    pre.insert(v[0]);
    for (int i = 1; i < n; i++)
    {
        curr.insert(v[i]);
        if (pre.find(v[i]) != pre.end())
        {
            pre.erase(v[i]);
            if (pre.empty())
            {
                ans++;
                pre = curr;
                curr.clear();
            }
        }
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

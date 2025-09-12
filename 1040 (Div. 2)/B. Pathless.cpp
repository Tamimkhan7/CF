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
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    int total_sum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total_sum += v[i];
        mp[v[i]]++;
    }
    bool ok = false;
    if (total_sum > s)
    {
        for (auto x : v)
            cout << x << ' ';
        cout << '\n';
        ok = true;
    }
    else if (total_sum == s - 1)
    {
        for (auto [x, y] : mp)
        {
            if (x == 0 || x == 2)
            {
                for (int i = 0; i < y; i++)
                    cout << x << ' ';
            }
        }
        for (auto [x, y] : mp)
        {
            if (x == 1)
            {
                for (int i = 0; i < y; i++)
                    cout << x << ' ';
            }
        }
        cout << '\n';
        ok = true;
    }
    if (!ok)
        cout << -1 << '\n';
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
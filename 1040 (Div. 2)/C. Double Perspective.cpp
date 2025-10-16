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
    vector<pair<int, pair<int, int>>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, {b, (i + 1)}});
    }
    sort(all(v));
    for (int i = 0; i < n; i++)
        cout << v[i].first << ' ' << v[i].second.first << ' ' << v[i].second.second << '\n';
    int front_val = 0, back_val = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (back_val <= v[i].first)
        {
            back_val = v[i].second.first;
            ans.push_back(v[i].second.second);
        }
    }
    cout << ans.size() << '\n';
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
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
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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> v(all(mp));
        sort(all(v), cmp);
        // for (auto [x, y] : v)
        //     cout << x << ' ' << y << '\n';
        ll ans = 0;
        while (v.size() > 1)
        {
            ll x = 0;
            while (!v.empty() and (x + v.back().second) <= k)
            {
                x += v.back().second;
                v.pop_back();
            }
            ans++;
            if (v.empty())
                break;
            if (!v.empty())
                v.erase(v.begin());
        }
        if (v.size() >= 1)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}
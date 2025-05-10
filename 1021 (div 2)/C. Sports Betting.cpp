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
    map<int, int> mp, mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    // vector<pair<int, int>> p;
    // for (int i = 0; i < n; i++)
    // {
    //     if (mp[v[i]] != -1 and mp[v[i]] > 1)
    //         p.push_back({v[i], mp[v[i]]});
    //     mp[v[i]] = -1;
    // }
    // for (auto [x, y] : mp)
    // {
    //     cout << x << ' ' << y << '\n';
    // }
    // cout << '\n';

    // sort(all(p));
    // if (p.size() == 1 and p[0].second > 3)
    // {
    //     cout << "Yes\n";
    //     return;
    // }

    for (auto [x, y] : mp)
    {
        if (y > 3)
        {
            cout << "Yes\n";
            return;
        }
        if (mp2[x])
        {
            if (y > 1)
            {
                cout << "Yes\n";
                return;
            }
            mp2[x + 1]++;
        }
        else
        {
            if (y > 1)
                mp2[x + 1]++;
        }
    }
    cout << "No\n";
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
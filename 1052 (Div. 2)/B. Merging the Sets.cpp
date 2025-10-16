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
    int n, m;
    cin >> n >> m;

    unordered_map<int, vector<int>> mp;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            int x;
            cin >> x;
            se.insert(x);
            mp[i].push_back(x);
        }
    }

    if (se.size() != m)
    {
        cout << "NO\n";
        return;
    }
 for (auto [x, y] : mp)
    {
       for(auto z: y)cout<<z<<' ';
       cout<<'\n';
            // cnt++;
    }
    // int cnt = 0;
    // for (auto [x, y] : mp)
    // {
    //     if (y.size() >= 2)
    //         cnt++;
    // }

    // cout << (cnt >= 2 ? "YES\n" : "NO\n");
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}

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

int32_t main()
{
    MTK;

    ll n, x;
    cin >> n >> x;

    vector<pair<int, int>> v;
    int ans = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if ((x / i) <= n and x % i == 0)
            v.push_back({i, x / i});
    }
    for (auto [x, y] : v)
    {
        if (x == y)
            ans++;
        else
            ans += 2;
    }
    cout << ans << '\n';
    return 0;
}
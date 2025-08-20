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
    unordered_map<int, int> mp, idx;
    int x, i = 0;
    while (cin >> x)
    {
        mp[x]++;
        if (idx.count(x) == 0)
            idx[x] = i;
        i++;
    }
    map<int, int> cnt;
    for (auto [x, y] : idx)
        cnt[y] = x;

    // for (auto [x, y] : cnt)
    //     cout << x << ' ' << y << '\n';
    // cout << '\n';

    for (auto [x, y] : cnt)
        cout << y << ' ' << mp[y] << '\n';

    return 0;
}
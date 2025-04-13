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

bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}
int32_t main()
{
    MTK;

    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (auto c : s)
        mp[c]++;

    vector<pair<char, int>> v(all(mp));

   // sort(all(v), cmp);

    // for (auto [x, y] : v)
    //     cout << x << ' ' << y << '\n';

    int cnt = 0;
    bool ok = false;
    for (auto [x, y] : v)
    {
        if (y % 2 != 0 and !ok)
            ok = true;
        else if (y % 2 != 0)
            cnt += y;
    }

    if (cnt % 2 == 0 || v.size() == 1)
        cout << "First\n";
    else
        cout << "Second\n";

    return 0;
}
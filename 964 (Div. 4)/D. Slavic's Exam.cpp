#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s, t;
        cin >> s >> t;
        int curr = 0, m = int(s.size());
        bool ok = false;

        for (auto x : t)
        {
            while (curr < m and s[curr] != '?' and s[curr] != x)
                curr++;

            if (curr == m)
            {
                ok = true;
                break;
            }
            s[curr++] = x;
        }
        for (auto &c : s)
            if (c == '?')
                c = 'a';
        if (!ok)
        {
            cout << "YES" << '\n';
            cout << s << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}

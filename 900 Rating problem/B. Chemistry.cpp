#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    string s, xp;
    cin >> s;
    xp = s;
    int x = n - k;
    if (s.size() == 1 || x == 1)
    {
        cout << "YES" << '\n';
        return;
    }
    for (int i = 0; i < n - x; i++)
    {
        string ss = s.substr(i, x);
        string sx = ss;
        reverse(all(ss));
        if (ss == sx)
        {
            cout << "YES" << '\n';
            return;
        }
        deque<string> d(all(sx)), ans;
        sort(all(d));
        while (!d.empty())
        {
            ans.push_back(d.front());
            d.pop_front();
            ans.push_front(d.front());
            d.pop_front();
        }
        deque<string> ans2(all(ans));
        reverse(all(ans2));
        if (ans == ans2)
        {
            cout << "YES" << '\n';
            return;
        }
    }

    sort(all(xp));
    for (int i = 0; i < n - x; i++)
    {
        string ss = xp.substr(i, x);
        string sx = ss;
        reverse(all(ss));
        if (ss == sx)
        {
            cout << "YES" << '\n';
            return;
        }
        deque<string> d(all(sx)), ans;
        sort(all(d));
        while (!d.empty())
        {
            ans.push_back(d.front());
            d.pop_front();
            ans.push_front(d.front());
            d.pop_front();
        }
        deque<string> ans2(all(ans));
        reverse(all(ans2));
        if (ans == ans2)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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
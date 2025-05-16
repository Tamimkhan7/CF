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
    string s, ss;
    cin >> n >> s;
    unordered_map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        ss = "";
        ss = s[i];
        ss += s[i + 1];
        // show(i), show(ss);
        if (i + 2 < n and s[i + 1] == s[i + 2] and s[i] == s[i + 2])
            i++;
        if (mp.count(ss) > 0)
        {
            // show(ss);
            cout << "YES\n";
            return;
        }
        mp[ss]++;
    }
    cout << "NO\n";
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
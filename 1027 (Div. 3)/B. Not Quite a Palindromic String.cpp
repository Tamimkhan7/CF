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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (auto c : s)
    {
        if (c == '0')
            zero++;
        else
            one++;
    }
    int x = zero / 2;
    int y = one / 2;
    // show(x), show(y);
    if ((max(x, y) + min(x, y) == k) || (max(x, y) - min(x, y) == k))
        cout << "YES\n";
    else
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
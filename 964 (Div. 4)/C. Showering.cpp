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
    int n, s, m;
    cin >> n >> s >> m;
    int ans = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (abs(ans - a) >= s)
            flag = true;
        ans = b;
    }
    if (abs(ans - m) >= s)
        flag = true;

    if (flag)
        cout << "YES" << '\n';
    else
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

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
    int x;
    cin >> x;
    cout << 1LL * x * 2 << '\n';
    // for (int i = 1; i * i <= 1e9; i++)
    // {
    //     string s = to_string(x) + to_string(i);
    //     // show(s);
    //     ll res = stoll(s);
    //     if (res % (x + i) == 0)
    //     {
    //         cout << i << '\n';
    //         //  return;
    //     }
    // }
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
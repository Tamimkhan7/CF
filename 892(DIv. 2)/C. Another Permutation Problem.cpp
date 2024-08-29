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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 1; i <= n; i++)
            ans += i * i;
        ll ans2 = ans;
        int x = n * (n - 1);
        int y = (n - 1) * (n - 1);
        ans2 -= y;
        ans2--;
        ans -= x;
        ans--;
        cout << ans << ' ' << ans2 << '\n';
    }
    return 0;
}
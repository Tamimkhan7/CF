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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if ((a > c and b > d) || (a > c and b >= d) || (a >= c and b > d))
            ans += 2;
        if ((b > c and a > d) || (b >= c and a > d) || (b > c and a >= d))
            ans += 2;
        cout << ans << '\n';
    }
    return 0;
}
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        ll a = n / x, b = n / y;
        ll lcm = 1LL * x * y / __gcd(x, y);
        // show(lcm);
        ll common = n / lcm;
        a -= common, b -= common;
        ll sum_x = 0,
           sum_y = 0;

        ll sum = 1LL * n * (n + 1) / 2;
        int bad = n - a;
        ll bad_sum = 1LL * bad * (bad + 1) / 2;
        sum_x = sum - bad_sum;

        sum_y = 1LL * b * (b + 1) / 2;
        cout << sum_x - sum_y << '\n';
    }
    return 0;
}
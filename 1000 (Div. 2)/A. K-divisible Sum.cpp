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
        int n, k;
        cin >> n >> k;
        int mx = max(n, k);
        int mn = min(n, k);
        if (n == mx and n % k == 0)
        {
            cout << 1 << '\n';
            continue;
        }
        // if (n == 1 || k == 1)
        // {
        //     cout << k << '\n';
        //     continue;
        // }

        // show(mx), show(mn);
        int res = mx / mn;
        // show(res);

        if (mx % mn != 0 and mx == k)
            res++;
        cout << res << '\n';
    }
    return 0;
}
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
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 2; i >= 0; i--)
    {
        while (a[i] >= a[i + 1] and a[i] > 0)
        {
            a[i] /= 2;
            cnt++;
        }
        if (a[i] == a[i + 1])
        {
            cout << -1 << '\n';
            return;
        }
    }
    // for (int i = 1; i <= n; i++)
    //     cout << a[i] << ' ';
    // cout << '\n';

    // bool flag = true;
    // for (int i = 1; i < n; i++)
    // {
    //     if (a[i] >= a[i + 1])
    //     {
    //         flag = false;
    //         break;
    //     }
    // }

    cout << cnt << '\n';
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
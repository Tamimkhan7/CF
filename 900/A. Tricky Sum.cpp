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
        ll n;
        cin >> n;
        ll sum = n * (n + 1) / 2;
        // show(sum);
        ll negsum = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = pow(2, i);
            //  show(x);
            if (x <= n)
            {
                sum -= x;
                negsum += x;
            }
            else
                break;
        }
        cout << sum - negsum << '\n';
    }
    return 0;
}
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
        int n, l, r;
        cin >> n >> l >> r;
        l--, r--;
        int x = r - l + 1;
        vector<int> v(n), a, b;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            if (i >= l)
                a.push_back(v[i]);
            if (i <= r)
                b.push_back(v[i]);
        }

        sort(all(a));
        sort(all(b));

        ll sum = 0, sum2 = 0;
        for (int i = 0; i < x; i++)
            sum += a[i], sum2 += b[i];
        cout << min(sum, sum2) << '\n';
    }
    return 0;
}
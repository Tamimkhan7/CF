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
const int MOD = 998244353;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        for (int i = 0; i < n; i++)
            cin >> q[i];

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = 1LL << p[i];
            b[i] = 1LL << q[i];
        }

        vector<ll> a_mx(n);
        a_mx[0] = a[0];
        for (int i = 1; i < n; i++)
            a_mx[i] = max(a_mx[i - 1], a[i]);

        vector<ll> b_mx(n);
        b_mx[n - 1] = b[n - 1];
        for (int i = n - 2; i >= 0; i--)
            b_mx[i] = max(b_mx[i + 1], b[i]);

        vector<ll> r(n);

        vector<ll> b_pre(n);
        b_pre[0] = b[0];
        for (int i = 1; i < n; i++)
            b_pre[i] = max(b_pre[i - 1], b[i]);

        for (int i = 0; i < n; i++)
        {
            int l = 0;
            ll curr_mx = 0;
            while (l <= i)
            {
                ll val = a[l] + b[i - l];
                if (val > curr_mx)
                    curr_mx = val;
                l++;
            }
            r[i] = curr_mx % MOD;
        }

        for (int i = 0; i < n; i++)
            cout << r[i] << " ";
        cout << "\n";
    }
    return 0;
}

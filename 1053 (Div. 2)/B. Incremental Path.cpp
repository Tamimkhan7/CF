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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        set<ll> b;
        vector<ll> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            b.insert(v[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            ll cur = 1;
            for (int j = 0; j < i; j++)
            {
                if (s[j] == 'A')
                    cur++;
                else
                {
                    ll nxt = cur + 1;
                    auto it = b.lower_bound(nxt);
                    while (it != b.end() and *it == nxt)
                    {
                        nxt++;
                        it = b.lower_bound(nxt);
                    }
                    cur = nxt;
                }
            }
            b.insert(cur);
        }

        cout << b.size() << "\n";
        for (auto x : b)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}

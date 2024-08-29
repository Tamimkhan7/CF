#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));

        ll ans1 = 1LL * v[0] * v[1] * v[n - 1];
        ll ans2 = 1LL * v[n - 1] * v[n - 2] * v[n - 3];

        ll ans = max(ans1, ans2);

        cout << ans << '\n';
    }
    return 0;
}

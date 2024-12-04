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
        int n;
        cin >> n;
        vector<int> c(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            mp[c[i]]++;
        }
        int one = 0, two = 0;
        for (auto [x, y] : mp)
        {
            if (y == 1)
                one++;
            else if (y >= 2)
                two++;
        }
        // show(one), show(two);
        int ans = (one + 1) / 2 * 2;
        // show(ans);
        ans += two;
        cout << ans << '\n';
    }
    return 0;
}
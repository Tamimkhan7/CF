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
    string s;
    cin >> s;
    ll ans = 0, a = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'o')
            a += b;
        else if (i > 0 and s[i - 1] == 'v')
        {
            b++;
            ans += a;
            // cout << a << ' ' << ans << ' ' << b << '\n';
        }
    }
    cout << ans << '\n';
    return 0;
}
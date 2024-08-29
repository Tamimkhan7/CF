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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = (a * b) % 100;
    ans = (ans * c) % 100;
    ans = (ans * d) % 100;
    string s = to_string(ans);
    // cout << s << '\n';
    bool flag = false;
    while (s.size() != 2)
    {
        s += '0';
        flag = true;
    }
    if (flag)
        reverse(all(s));

    cout << s << '\n';
    return 0;
}
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
    int a, b;
    cin >> a >> b;
    int x = max(a, b);
    int y = min(a, b);

    ll sum = (x - y + 1LL) * (x + y) / 2;

    ll even_y = (y % 2 == 0) ? y : y + 1;
    ll even_x = (x % 2 == 0) ? x : x - 1;
    ll even_count = (even_x - even_y) / 2 + 1;
    ll even_sum = even_count * (even_y + even_x) / 2;

    ll odd_y = (y % 2 == 1) ? y : y + 1;
    ll odd_x = (x % 2 == 1) ? x : x - 1;
    ll odd_count = (odd_x - odd_y) / 2 + 1;
    ll odd_sum = odd_count * (odd_y + odd_x) / 2;

    cout << sum << '\n'
         << even_sum << '\n'
         << odd_sum << '\n';
    return 0;
}

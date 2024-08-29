#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    ll a, b;
    cin >> a >> b;
    int ans = a % 10;
    ans += b % 10;
    cout << ans << '\n';

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long

int32_t main()
{
    MTK;
    int n, r;
    cin >> n >> r;
    vector<ll> v(n);
    map<ll, ll> right, left;
    for (auto &a : v)
    {
        cin >> a;
        right[a]++;
    }
    ll cnt = 0;
    for (auto &a : v)
    {
        if (a % r)
        {
            left[a]++, right[a]--;
            continue;
        }
        ll x1 = left[a / r];
        ll x2 = right[a * r];
        cnt += x1 * x2;
        right[a]--;
        left[a]++;
    }
    cout << cnt << '\n';
    return 0;
}

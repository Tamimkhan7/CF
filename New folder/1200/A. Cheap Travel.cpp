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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int one_way_ride = n * a;
    int both_way_ride;
    if (n < m)
    {
        both_way_ride = b;
        cout << min(one_way_ride, both_way_ride) << '\n';
        return 0;
    }

    both_way_ride = (n / m) * b;
    //show(one_way_ride), show(both_way_ride);
    if (n > m and n % m != 0)
    {
        int x = min(a, b);
        both_way_ride += (n % m) * x;
    }
    cout << min(one_way_ride, both_way_ride) << '\n';
    return 0;
}
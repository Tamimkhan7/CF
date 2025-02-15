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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(all(v));
    // reverse(all(v));

    if (n % v[0] == 0)
    {
        cout << n / v[0] << '\n';
        return 0;
    }
    int x = n / v[0];
    // x--;
    if ((n - (x * v[0]) == v[1]) || (n - (x * v[0]) == v[2]))
    {
        cout << x + 1 << '\n';
        return 0;
    }
    x--;
    if ((n - (x * v[0]) == v[1]) || (n - (x * v[0]) == v[2]))
    {
        cout << x + 1 << '\n';
        return 0;
    }
    if (n % v[1] == 0)
    {
        cout << n / v[1] << '\n';
        return 0;
    }

    x = n / v[1];
    // x--;
    if ((n - (x * v[1]) == v[0]) || (n - (x * v[1]) == v[2]))
    {
        cout << x + 1 << '\n';
        return 0;
    }
    x--;
    if ((n - (x * v[1]) == v[0]) || (n - (x * v[1]) == v[2]))
    {
        cout << x + 1 << '\n';
        return 0;
    }
    if (n % v[2] == 0)
    {
        cout << n / v[2] << '\n';
        return 0;
    }

    x = n / v[2];
    // x--;
    if ((n - (x * v[2]) == v[0]) || (n - (x * v[2]) == v[1]))
    {
        cout << x + 1 << '\n';
        return 0;
    }
    x--;
    if ((n - (x * v[2]) == v[0]) || (n - (x * v[2]) == v[1]))
    {
        cout << x + 1 << '\n';
        return 0;
    }
    return 0;
}
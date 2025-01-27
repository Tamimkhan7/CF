#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;

    vector<int> divisor;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);
            if (n / i != i)
                divisor.push_back(n / i);
        }
    }
    sort(all(divisor));
    divisor.pop_back();
    // for (auto x : divisor)
    //     cout << x << ' ';
    // cout << '\n';
    int x = divisor[divisor.size() - 1];
    int y = n - x;
    cout << max(x, y) << ' ' << min(x, y) << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
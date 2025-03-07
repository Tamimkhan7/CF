#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        ll total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total_sum += v[i];
        }

        if (total_sum % x != 0)
        {
            cout << n << '\n';
            continue;
        }

        int l = 0, r = n - 1;
        while (l < n && v[l] % x == 0)
            l++;
        while (r >= 0 && v[r] % x == 0)
            r--;

        if (l == n)
            cout << -1 << '\n';
        else
            cout << max(n - l - 1, r) << '\n';
    }
    return 0;
}

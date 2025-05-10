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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(all(v));
        while (k > 0)
        {
            if (k > 0)
            {
                v.erase(v.begin());
                k--;
            }
            if (k > 0)
            {
                v.pop_back();
                k--;
            }
        }
        sort(all(v));
        cout << v[v.size() - 1] - v[0] + 1 << '\n';
    }
    return 0;
}
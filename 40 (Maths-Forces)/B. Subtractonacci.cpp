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
        int n, a1, a2;
        cin >> n >> a1 >> a2;
        vector<int> v;
        if (n == 1)
            v.push_back(a1);
        else if (n >= 2)
        {
            v.push_back(a1);
            v.push_back(a2);
        }

        for (int i = 2; i < n; i++)
        {
            int x = v[i - 1] - v[i - 2];
            v.push_back(x);
        }
        ll sum = 0;
        for (auto x : v)
        {
            //sum += x;
            cout << x << ' ';
            cout << ' ';
            sum %= mod;
        }
        cout << sum << '\n';
    }
    return 0;
}
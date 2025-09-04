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

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt++;
        else
        {
            if (cnt >= k)
            {
                cout << "NO\n";
                return;
            }
            cnt = 0;
        }
    }

    if (cnt >= k)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int l = 1, r = n;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cout << r-- << ' ';
        else
            cout << l-- << ' ';
    }
    cout << "\n";
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
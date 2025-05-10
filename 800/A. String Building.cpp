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
    string s;
    cin >> s;
    int a_cnt = 0, b_cnt = 0;
    for (auto c : s)
    {
        if (c == 'a')
        {
            a_cnt++;
            if (b_cnt == 1)
            {
                cout << "NO\n";
                return;
            }
            b_cnt = 0;
        }
        else
        {
            b_cnt++;
            if (a_cnt == 1)
            {
                cout << "NO\n";
                return;
            }
            a_cnt = 0;
        }
    }
    if (a_cnt == 1 || b_cnt == 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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
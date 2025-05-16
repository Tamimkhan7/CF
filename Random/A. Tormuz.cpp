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
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        string ss = s[i];
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                ss += s[j];
            string sp = ss;
            reverse(all(sp));
            if (sp == ss)
                ans = max(ans, (int)ss.size());
            else
            {
                int x = m;
                while (!ss.empty(), x > 0)
                {
                    ss.pop_back();
                    x--;
                }
            }
            show(ss);
        }
        res = max(res, ans);
    }
    cout << res << '\n';

    return 0;
}
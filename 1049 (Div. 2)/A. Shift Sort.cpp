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
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0, one_cnt = 0, ans = 0;
        bool ok = false;
        for (auto c : s)
        {
            if (s[i] == '1')
                one_cnt++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0' and one_cnt > 0)
                ans++, one_cnt--;

            else
            {
                one_cnt--;
                if (one_cnt == 0)
                    break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
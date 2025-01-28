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
        string s, ss;
        cin >> s;
        int n = s.size();
        int one_cnt = 0, zero_cnt = 0;
        for (auto c : s)
        {
            if (c == '1')
                one_cnt++;
            else
                zero_cnt++;
        }
        if (n == 1)
            cout << 1 << '\n';
        else if (n == 2)
        {
            if (one_cnt == zero_cnt)
                cout << 0 << '\n';
            else
                cout << 2 << '\n';
        }
        else if (one_cnt == 1 || zero_cnt == 1)
            cout << max(one_cnt, zero_cnt) - 1 << '\n';
        else if (one_cnt == zero_cnt)
            cout << 0 << '\n';
        else
            cout << max(one_cnt, zero_cnt) << '\n';

        // sort(all(s));
        // ss = s;
        // reverse(all(s));
        // int ans = 0;
        // while (!s.empty() and !ss.empty())
        // {
        //    // show(s), show(ss);
        //     if (!s.empty() and !ss.empty() and (s.front() != ss.front()))
        //     {
        //         s.erase(s.begin());
        //         ss.erase(ss.begin());
        //     }
        //     else
        //     {
        //         if (!ss.empty())
        //         {
        //             ans++;
        //             ss.erase(ss.begin());
        //         }
        //     }
        // }
        // cout << ans << '\n';
    }
    return 0;
}
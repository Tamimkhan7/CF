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
        cin >> n;
        string s;~
        cin >> s;
        int cnt = 0;
        bool ok = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                cnt++;
            else
            {
                if (cnt > 2)
                {
                    ok = true;
                    break;
                }
                cnt = 0;
            }
        }
        map<string, int> mp;
        for (int i = 0; i < n - 1; i += 2)
        {
            string ss = s.substr(i, 2);
            // cout << ss << '\n';
            mp[ss]++;
            if (mp[ss] > 1)
            {
                ok = true;
                break;
            }
        }
        mp.clear();

        for (int i = 1; i < n - 1; i += 2)
        {
            string ss = s.substr(i, 2);
            // cout << ss << '\n';
            mp[ss]++;
            if (mp[ss] > 1)
            {
                ok = true;
                break;
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
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
    int n, k;
    string s;
    cin >> n >> k >> s;
    map<char, int> mp;
    for (auto c : s)
        mp[c]++;
    for (auto [x, y] : mp)
    {
        if (k > 0)
        {
            if (y >= k)
            {
                int p = y - k;
                mp[x] = p;
                k = 0;
            }
            else
            {
                k -= y;
                mp[x] = 0;
            }
        }
        else
            break;
    }
    // for (auto [x, y] : mp)
    //     cout << x << ' ' << y << '\n';

    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]] > 0)
        {
            ans += s[i];
            mp[s[i]]--;
        }
    }
    reverse(all(ans));
    cout << ans << '\n';
    return 0;
}
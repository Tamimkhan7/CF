#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
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
        string s, t;
        cin >> s >> t;
        int n = s.size(), curr = 0;
        bool flag = false;
        for (auto x : t)
        {
            while (curr < n and s[curr] != '?' and s[curr] != x)
                curr++;
            if (curr == n)
            {
                flag = true;
                break;
            }
            s[curr++] = x;
        }
        // cout << s << '\n';
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                s[i] = 'a';
        }
        if (!flag)
        {
            cout << "YES" << '\n';
            cout << s << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}
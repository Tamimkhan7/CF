#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n & 1)
            cout << "NO" << '\n';
        else
        {
            string ss = s.substr(0, n / 2), sp = s.substr(n / 2, n);
            // cout << ss << ' ' << sp << '\n';
            if (ss == sp)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
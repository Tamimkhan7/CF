#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
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
        int cnt = 0, idx = n - 1;
        // for (int i = n - 1; i >= 0; i--)
        // {
        //     if (s[i] == '0')
        //         cnt++, idx = i;
        //     else
        //         break;
        // }
        bool ok = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
                ok = true;
            else if (ok)
                cnt++;
        }
        cout << n - (cnt + 1) << '\n';
    }
    return 0;
}

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
        string s;
        cin >> s;
        string a = "", b = "";
        bool flag = true, ok = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                if (ok)
                    a += '0', b += '2';
                else
                    a += '1', b += '1';
            }
            else if (s[i] == '1')
            {
                if (ok)
                    a += '0', b += '1';
                else
                    a += '1', b += '0';
                ok = true;
            }
            else
                a += '0', b += '0';
        }
        cout << a << '\n';
        cout << b << '\n';
    }
    return 0;
}
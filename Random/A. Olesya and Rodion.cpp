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

// int t;
// void print128(__int128 n)
// {
//     if (n == 0)
//     {
//         cout << 0;
//         return;
//     }
//     if (n < 0)
//     {
//         cout << '-';
//         n = -n;
//     }
//     string res = "";
//     while (n > 0)
//     {
//         res += char('0' + n % 10);
//         n /= 10;
//     }
//     reverse(all(res));
//     cout << res;
//     // while (n % t != 0)
//     //     n++;
//     // cout << n << '\n';
// }

int32_t main()
{
    MTK;
    int n, t;
    cin >> n >> t;

    string s;
    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1 << '\n';
            return 0;
        }
        cout << 1;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
        cout << '\n';
    }
    else
    {
        for (int i = 0; i < n; i++)
            cout << t;
        cout << '\n';
    }

    return 0;
}

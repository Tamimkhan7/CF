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
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum % 3 == 0)
        {
            int x = sum / 3;
            if (x >= b)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}
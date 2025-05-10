#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    if (sum % 4 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
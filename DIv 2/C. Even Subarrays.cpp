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

const int N = 2e5 + 9;
int a[N], pref[N];
int divisor[N];

void div()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            divisor[j]++;
    }
}
int32_t main()
{
    MTK;
    div();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] ^ a[i];
            cout << pref[i] << ' ';
        }
        cout << '\n';
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                int x = pref[i] ^ pref[j - 1];
                if (divisor[x] % 2 == 0)
                    ans++;
            }
        }
        // cout << ans << '\n';
    }
    return 0;
}
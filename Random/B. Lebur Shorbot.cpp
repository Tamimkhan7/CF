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
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 2);
    int one_cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            one_cnt++;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            if (v[b] == 1)
            {
                v[b] = 0;
                one_cnt--;
            }
            else
            {
                v[b] = 1;
                one_cnt++;
            }
        }
        else
        {
            if (b <= one_cnt)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
    }

    return 0;
}
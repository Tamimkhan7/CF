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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int one_cnt = 0, two_cnt = 0, zero_cnt = 0;
        for (auto c : s)
        {
            if (c == '0')
                zero_cnt++;
            else if (c == '1')
                one_cnt++;
            else
                two_cnt++;
        }

        int temp = one_cnt;
        vector<char> v(n, '+');

        for (int i = 0; i < n and one_cnt; i++)
            v[i] = '-', one_cnt--;

        for (int i = n - 1; i >= 0 and zero_cnt; i--)
            v[i] = '-', zero_cnt--;

        for (int i = temp; i < n and two_cnt; i++)
        {
            v[i] = '?';
            if (n - i - 1 >= 0)
                v[n - i - 1] = '?';
            two_cnt--;
        }

        for (int i = 0; i < n; i++)
            cout << (n == 1 ? '-' : v[i]);
        cout << '\n';
    }

    return 0;
}

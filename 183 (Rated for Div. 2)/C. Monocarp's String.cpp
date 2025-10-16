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

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> a, b;
    int a_cnt = 0, b_cnt = 0, total_a = 0, total_b = 0;
    for (auto c : s)
    {
        if (c == 'a')
        {
            if (b_cnt > 0)
                b.push_back(b_cnt);
            a_cnt++;
            b_cnt = 0;
            total_a++;
        }
        else
        {
            if (a_cnt > 0)
                a.push_back(a_cnt);
            a_cnt = 0;
            b_cnt++;
            total_b++;
        }
    }
    if (b_cnt > 0)
        b.push_back(b_cnt);
    if (a_cnt > 0)
        a.push_back(a_cnt);
    // show(total_a), show(total_b);

    // for (auto x : a)
    //     cout << x << ' ';
    // cout << '\n';

    // for (auto x : b)
    //     cout << x << ' ';
    // cout << '\n';

    if (total_a == total_b)
    {
        cout << 0 << '\n';
        return;
    }
    else if (total_a > total_b and total_b > 0)
    {

        int baki = (total_a - total_b);
        for (auto x : a)
        {
            if (x >= baki)
            {
                cout << baki << '\n';
                return;
            }
        }
    }
    else if (total_a < total_b and total_a > 0)
    {
        int baki = total_b - total_a;
        for (auto x : b)
        {
            if (x >= baki)
            {
                cout << baki << '\n';
                return;
            }
        }
    }
    int temp_a = total_a, temp_b = total_b;
    int cnt = 0;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        if (s[i] == 'a')
            total_a--;
        else if (s[i] == 'b')
            total_b--;
        if (total_a == total_b and cnt != n)
        {
            ok = true;
            break;
        }
    }
   int cnt1 = 0;
    reverse(all(s));

    for (int i = 0; i < n; i++)
    {
        cnt1++;
        if (s[i] == 'a')
            temp_a--;
        else if (s[i] == 'b')
            temp_b--;
        if (temp_a == temp_b and cnt != n)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << min(cnt, cnt1) << '\n';
    else
        cout << -1 << '\n';
}
int32_t main()
{
    MTK;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
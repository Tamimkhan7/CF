#include <bits/stdc++.h>
using namespace std;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

bool check(string a, string b)
{
    reverse(all(a));
    if (a == b)
        return true;
    else
        return false;
}

void solve()
{
    string s;
    int n, ans = 0;
    cin >> s >> n;

    string ss = s.substr(0, 2);
    string k = s.substr(3, 2);
    int a = stoi(ss);
    int b = stoi(k);

    while (a < 24)
    {
        cout << ss << ' ' << k << '\n';
        if (check(ss, k))
        {

            ans++;
        }

        b += n;
        a += b / 60;
        b %= 60;

        ss = to_string(a);
        k = to_string(b);

        if (a <= 9)
            ss = "0" + ss;

        if (b <= 9)
            k = "0" + k;
    }
    cout << ans << '\n';
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

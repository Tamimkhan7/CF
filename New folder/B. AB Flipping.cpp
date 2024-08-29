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
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    vector<int> v;
    // while (1)
    // {
    //     int flag = 0;
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         if (s[i] == 'A' and s[i + 1] == 'B')
    //         {
    //             if (find(all(v), i) == v.end())
    //             {
    //                 ans++;
    //                 flag = 1;
    //                 v.push_back(i);
    //                 swap(s[i], s[i + 1]);
    //                 break;
    //             }
    //         }
    //     }
    //     if (flag == 0)
    //     {
    //         cout << ans << '\n';
    //         return;
    //     }
    // }
    int a = -1, b = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' and a == -1)
            a = i;
        if (s[i] == 'B')
            b = i;
    }
  
    if (b > a and a != -1 and b != -1)
        cout << b - a << '\n';
    else
        cout << 0 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
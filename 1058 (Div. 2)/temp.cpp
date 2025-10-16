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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int value;
    cin >> value;
    sort(v.begin(), v.end());
    // for(auto x: v)cout<<x<<' ';
    // cout<<'\n';
    map<int, int> mp;
    for (auto x : v)
    {
        int r = ((x % value) + value) % value;
        mp[r]++;
    }
    // for(auto [x,y]: mp)cout<<x<<' '<<y<<'\n';
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = ans % value;
        show(x);
        if (mp[x] > 0)
        {
            mp[x]--;
            ans++;
            show(ans);
        }
        else
            break;
    }
    show(ans);

    // unordered_map<ll, bool> vis;
    // for (int i = 0; i < n; i++)
    // {
    //     int x = v[i];
    //     show(x);
    //     if (x < 0)
    //     {
    //         while (x < 0)
    //         {
    //             x += value;
    //             if (mp.count(x) > 0)
    //                 break;
    //         }
    //     }
    //     else
    //     {
    //         if (!vis[x])
    //         {
    //             vis[x] = true;
    //             while (x > 0 and x - value >= 0)
    //             {
    //                 x -= value;
    //                 if (mp.count(x) > 0)
    //                     break;
    //             }
    //         }
    //         else
    //         {
    //             x += value;
    //             while (mp.count(x) > 0)
    //                 x += value;
    //             mp[x]++;
    //         }
    //     }
    //     show(x);
    //     cout << '\n';
    // }

    // int ans = v.size() + 1;
    // for (int i = 0; i <= (int)v.size(); i++)
    // {
    //     if (mp.count(i) == 0)
    //     {
    //         ans = i;
    //         break;
    //     }
    // }
    // cout << ans << '\n';
    return 0;
}

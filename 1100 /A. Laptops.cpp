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

// bool cmp(pair<int, int> a, pair<int, int> b)
// {
//     return a.second > b.second;
// }
// bool cmp_first(pair<int, int> a, pair<int, int> b)
// {
//     return a.first < b.first;
// }
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    // vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        // v.push_back({x, y});
        if (x != y)
        {
            cout << "Happy Alex" << '\n';
            return 0;
        }
    }
    cout << "Poor Alex" << '\n';
    return 0;
    // sort(all(v), cmp_first);
    // sort(all(v), cmp);
    // // for (auto [x, y] : v)
    // //     cout << x << ' ' << y << '\n';
    // bool ok = true;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if ((v[i].first < v[i + 1].first) and (v[i].second > v[i + 1].second))
    //         continue;
    //     else
    //     {
    //         ok = false;
    //         break;
    //     }
    // }
}
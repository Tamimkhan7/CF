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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
bool cmp2(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<pair<int, int>> even, odd;
    int even_sum = 0, odd_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (i % 2)
        {
            odd.push_back({v[i], i});
            odd_sum += v[i];
        }
        else
        {
            even.push_back({v[i], i});
            even_sum += v[i];
        }
    }
    if (n == 1)
    {
        cout << odd_sum << '\n';
        return;
    }
    sort(all(odd));
    sort(even.rbegin(), even.rend());
    // for (auto [x, y] : even)
    //     cout << x << ' ' << y << '\n';
    // cout << '\n';
    int ans;
    // show(even_sum), show(odd_sum);
    if (even[0].first > odd[0].first)
    {
        even_sum -= even[0].first;
        even_sum += odd[0].first;
        odd_sum -= odd[0].first;
        odd_sum += even[0].first;
        // show(even_sum), show(odd_sum);
        ans = odd_sum - even_sum;
        ans += (max(even[0].second, odd[0].second) - min(even[0].second, odd[0].second));
    }
    else
    {
        ans = odd_sum - even_sum;
        sort(all(even), cmp);
        sort(all(odd), cmp);
        int res = abs(even[0].second - even.back().second);
        res = max(res, abs(odd[0].second - odd.back().second));
        if (even[0].first == odd.back().first)
            res = max(res, abs(even[0].second - odd.back().second));
        ans += res;
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
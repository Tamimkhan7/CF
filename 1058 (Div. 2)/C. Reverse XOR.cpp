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

bool cmp(pair<ll, int> a, pair<ll, int> b)
{
    return a.first >= b.first and a.second <= b.second;
}
bool cmp2(pair<ll, int> a, pair<ll, int> b)
{
    return a.first < b.first and a.second > b.second;
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> p(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        mp[p[i]]++;
    }
    vector<pair<ll, int>> v;
    for (auto [x, y] : mp)
        v.push_back({1LL * x * y, x});

    sort(v.begin(), v.end());
    n = v.size();
    vector<ll> dp(n);
    dp[0] = v[0].first;
    int curr = v[0].second;
    for (int i = 1; i < n; i++)
    {
        ll take = v[i].first;      
        int j = i - 1;
        while (j >= 0 && v[i].second - v[j].second <= 2)
            j--;
        if (j >= 0)
            take += dp[j];
        dp[i] = max(dp[i - 1], take);
    }
    cout << dp[n - 1] << '\n';

    return 0;
}
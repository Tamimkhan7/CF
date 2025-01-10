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
    vector<string> v(n);
    unordered_map<string, bool> check;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    for (auto [x, y] : mp)
        check[x] = true;

    map<string, int> cnt;
    for (int i = 0; i < n; i++)
    {
        if (check[v[i]])
        {
            cout << "OK" << '\n';
            mp[v[i]]--;
            check[v[i]] = false;
        }
        else
        {
            cnt[v[i]]++;
            cout << v[i];
            cout << cnt[v[i]] << '\n';
            mp[v[i]]--;
        }
    }

    return 0;
}
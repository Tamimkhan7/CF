#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    vector<int> v, x;
    while (cin >> n)
    {
        v.push_back(n);
        x.push_back(n);
    }
    sort(all(v));
    for (auto x : v)
        cout << x << '\n';
    cout << '\n';
    for (auto xx : x)
        cout << xx << '\n';

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    int a = v[3] - v[0];
    int b = v[3] - v[1];
    cout << a << ' ' << b << ' ' << (v[3] - (a + b)) << '\n';
    return 0;
}
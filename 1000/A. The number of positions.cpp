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
    int a, b, n;
    cin >> b >> a >> n;
    vector<int> v;
    for (int i = a + 1; i <= b; i++)
        v.push_back(i);
    int sz = v.size();
    if (sz > n + 1)
        cout << n + 1 << '\n';
    else
        cout << sz << '\n';
    return 0;
}
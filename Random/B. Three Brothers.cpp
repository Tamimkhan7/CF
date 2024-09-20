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
    int a, b;
    cin >> a >> b;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    for (int i = 1; i <= 3; i++)
    {
        if (find(all(v), i) == v.end())
        {
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}
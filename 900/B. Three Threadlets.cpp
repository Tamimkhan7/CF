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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(all(v));
        int time = 0;
        while (v[0] != v.back() and time < 3)
        {
            int x = v.back();
            v.pop_back();

            v.push_back(v[0]), v.push_back(x - v[0]);

            sort(all(v));
            time++;
        }
        sort(all(v));
        if (v[0] == v.back())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
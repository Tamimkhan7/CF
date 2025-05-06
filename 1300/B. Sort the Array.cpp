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

    if (is_sorted(all(v)))
    {
        cout << "yes\n";
        cout << 1 << ' ' << 1 << "\n";
        return 0;
    }
    int l = 0, r = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
            l++;
        else
            break;
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] >= v[i - 1])
            r--;
        else
            break;
    }
    // show(l), show(r);
    reverse(v.begin() + l, v.begin() + r + 1);

    // for (int i = 0; i < n; i++)
    //     cout << v[i] << ' ';
    // cout << '\n';

    if (is_sorted(all(v)))
    {
        cout << "yes\n";
        cout << l + 1 << ' ' << r + 1 << '\n';
        return 0;
    }
    cout << "no\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        if (k % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
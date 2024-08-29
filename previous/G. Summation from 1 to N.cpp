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
    int n;
    cin >> n;
    ll sum = (1LL * n * (n + 1)) / 2;
    cout << sum << '\n';
    return 0;
}
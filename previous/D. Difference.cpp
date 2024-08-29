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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Difference = " << (1LL * (1LL * a * b) - (1LL * c * d)) << '\n';
    return 0;
}
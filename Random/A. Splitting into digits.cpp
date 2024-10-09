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
    cin >> n;
    // bool flag = false;

    // for (int i = 9; i >= 2; i--)
    // {
    //     if (n % i == 0 and !flag and n != i)
    //     {
    //         cout << n / i << '\n';
    //         int cnt = n / i;
    //         while (cnt--)
    //             cout << i << ' ';
    //         cout << '\n';
    //         flag = true;
    //     }
    // }
    // if (!flag)
    // {
    cout << n << '\n';
    while (n--)
        cout << 1 << ' ';
    cout << '\n';
    // }
}

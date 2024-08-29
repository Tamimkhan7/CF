#include <bits/stdc++.h>
using namespace std;
// #define MTK                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define mem(a, b) memset(a, b, sizeof(a))
// #define trace(x) cout << #x << ' ' << x << endl
// #define all(x) (x).begin(), (x).end()
// #define ll int long long
// #define mod 1000000007

int32_t main()
{
    // MTK;
    int l = 1, r = 1e6;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        cout << mid << '\n'; cout.flush();
        char s[4];
        cin >> s;
        if (strcmp(s ,"<")==0)
            r = mid - 1;
        else
            l = mid;
    }
    cout << "! " << l << '\n'; cout.flush();
    return 0;
}
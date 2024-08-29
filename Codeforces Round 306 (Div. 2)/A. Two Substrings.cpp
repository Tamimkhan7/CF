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
    string s;
    cin >> s;
    int n = s.size();
    bool foundAB = false, foundBA = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (!foundAB && s.substr(i, 2) == "AB")
        {
            foundAB = true;
            i++;
        }
        else if (foundAB && s.substr(i, 2) == "BA")
        {
            cout << "YES" << '\n';
            return 0;
        }
    }
    foundAB = false; 
    for (int i = 0; i < n - 1; i++)
    {
        if (!foundBA && s.substr(i, 2) == "BA")
        {
            foundBA = true;
            i++;
        }
        else if (foundBA && s.substr(i, 2) == "AB")
        {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
    return 0;
}

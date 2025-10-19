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
    string s;
    int k;
    cin >> s >> k;
    int ans = 0;
    set<char> se;
    bool ok = false;
    for (auto c : s)
    {
        if (se.find(c) == se.end())
            se.insert(c);
        else if (se.find(c) != se.end() and !ok)
        {
            for (char cc = 'a'; cc <= 'z'; cc++)
            {
                if (se.find(cc) == se.end())
                {
                    se.insert(cc);
                    break;
                }
            }
            ok = true;
        }

        show(se.size());
        show(c);
        if (se.size() == k)
        {
            ans++;
            se.clear();
        }
        show(ans);
        cout << '\n';
    }
    if (se.size() > 0)
        ans++;
    return 0;
}

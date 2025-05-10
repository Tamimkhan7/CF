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
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < (int)s.size(); i++)
    {
        for (int j = i; j < (int)s.size(); j++)
        {
            string ss = s.substr(i, j - i + 1);
            if (ss.size() == 3 || ss.size() == 4 || ss.size() == 5 || ss.size() == 6)
                mp[ss]++;
        }
    }
    vector<string> sp = {"Danil", "Olya", "Slava", "Ann", "Nikita"};

    int cnt = 0;
    for (auto ss : sp)
        cnt += mp[ss];

    if (cnt == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
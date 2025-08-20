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
    while (getline(cin, s))
    {
        if (s.empty())
            break;
        stringstream ss(s);
        string word;
        vector<string> v;
        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            v.push_back(word);
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (i)
                cout << ' ';
            cout << v[i];
        }
        cout << '\n';
    }

    return 0;
}
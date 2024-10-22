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
    ll n;
    cin >> n;
    vector<ll> v;
    while (find(all(v), n) == v.end())
    {
        v.push_back(n);
        n++;
        while (n % 10 == 0)
        {
            n /= 10;
            if (find(all(v), n) != v.end())
                break;
        }
    }

    cout << v.size() << '\n';
    return 0;
}

/* int n;
    cin >> n;
    set<int> a;
    while (a.find(n) == a.end())
    {
        a.insert(n);
        n++;
        while (n % 10 == 0)
            n /= 10;
    }

    cout << a.size() << endl; */
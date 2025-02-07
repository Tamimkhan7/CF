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

const int N = 1e6 + 9;
int divisors[N];
vector<int> v;

void divisor()
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            divisors[j]++;
    }
    for (int i = 1; i <= N; i++)
    {
        if (divisors[i] == 4)
            v.push_back(i);
    }
}

int32_t main()
{
    MTK;
    divisor();
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    // cout << v.size() << '\n';
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        priority_queue<int> q, p;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            q.push(v[i]);
            freq[v[i]]++;
        }

        int res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            while (freq[q.top()] == 0)
                q.pop();
            cout << res + q.top() << ' ';
            res += v[i];
            freq[v[i]]--;
        }
        cout << '\n';
    }
    cout << '\n';
}

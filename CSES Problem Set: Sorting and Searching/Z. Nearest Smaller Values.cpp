#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

const int N = 2e5 + 9;
int a[N], n;

int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    stack<int> st;
    vector<int> result(n + 1);

    for (int i = 1; i <= n; i++)
    {
        while (!st.empty() && a[st.top()] >= a[i])
            st.pop();

        if (st.empty())
            result[i] = 0;
        else
            result[i] = st.top();

        st.push(i);
        //    while(!st.empty()){
        //         cout << st.top() << ' ';
        //         st.pop();
        //    }
        // cout << '\n';
    }

    for (int i = 1; i <= n; i++)
        cout << result[i] << ' ';

    cout << '\n';

    return 0;
}

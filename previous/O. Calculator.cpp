#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    string a, b;
    int x;
    char c;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '*' || s[i] == '-' || s[i] == '/')
        {
            c = s[i];
            x = i;
            break;
        }
        else
            a += s[i];
    }
    for (int i = x + 1; i < s.size(); i++)
        b += s[i];

    int m = stoi(a);
    int n = stoi(b);
    if (c == '+')
        cout << m + n << '\n';
    else if (c == '-')
        cout << m - n << '\n';
    else if (c == '*')
        cout << (1LL * m * n) << '\n';
    else
        cout << m / n << '\n';

    return 0;
}
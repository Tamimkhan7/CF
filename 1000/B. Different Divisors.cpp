#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int long long
#define mod 1000000007

const int N = 1e3 + 9;
vector<int> prime;

void sieve()
{
    vector<bool> is_prime(N, true);
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
            for (int j = i * 2; j < N; j += i)
                is_prime[j] = false;
        }
    }
}

int d;

bool ok(int n)
{
    for (auto p : prime)
    {
        if (p >= d + 1 && n % p == 0)
            return true;
    }
    return false;
}

bool ok2(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt += (i == n / i) ? 1 : 2; // Counting divisors
        }
        if (cnt >= 4) // Early exit condition
            return true;
    }
    return false;
}

int32_t main()
{
    MTK;
    sieve();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> d;
        for (int i = d + 1;; i++) // Start from `d + 1`
        {
            if (ok(i) && ok2(i))
            {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}

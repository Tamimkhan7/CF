#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

bool prime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        ll a, b;
        // store next prime of the d+1 in the a
        for (ll i = d + 1;; i++)
        {
            if (prime(i))
            {
                a = i;
                break;
            }
        }
        // store next prime of the a+d in the b
        for (ll i = a + d;; i++)
        {
            if (prime(i))
            {
                b = i;
                break;
            }
        }
        cout << min(a * b, a * a * a) << '\n';
    }
    return 0;
}

// const int N = 1e3 + 9;
// vector<int> prime, Prime_4;

// void sieve()
// {
//     vector<bool> is_prime(N, true);
//     for (int i = 2; i < N; i++)
//     {
//         if (is_prime[i])
//         {
//             prime.push_back(i);
//             for (int j = i * 2; j < N; j += i)
//                 is_prime[j] = false;
//         }
//     }
// }

// int d;

// bool ok(int n)
// {
//     int cnt = 0;
//     for (auto p : prime)
//     {
//         if (p > n)
//             break;
//         if (n % p == 0)
//         {
//             int e = 0;
//             while (n % p == 0)
//             {
//                 e++;
//                 n /= p;
//             }
//             if (e > 0)
//                 cnt++;
//         }
//     }
//     return cnt >= d;
// }

// bool ok2(int n)
// {
//     int cnt = 0;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cnt += (i == n / i) ? 1 : 2;
//         }
//         if (cnt >= 4)
//             return true;
//     }
//     return false;
// }

// int32_t main()
// {
//     MTK;
//     sieve();
//     // for (auto x : prime)
//     // {
//     //     cout << x << ' ';
//     // }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         cin >> d;
//         int l = 1, r = 1e9, ans = 0;
//         while (l <= r)
//         {
//             int mid = (1LL * l + r) / 2;
//             show(mid);
//             if (ok(mid) and ok2(mid))
//             {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }
//         cout << ans << '\n';
//     }

//     return 0;
// }
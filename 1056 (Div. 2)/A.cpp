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

     int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;


        if (n == 2 && k == 3) {
            cout << "NO\n";
            continue;
        }

        vector<string> grid(n, string(n, 'L')); 
        int count = 0;


        for (int j = 0; j < n && count < k; j++) {
            grid[0][j] = 'U';
            count++;
        }

 
        for (int i = 1; i < n && count < k; i++) {
            grid[i][0] = 'L';
            count++;
        }

  
        for (int j = 1; j < n && count < k; j++) {
            grid[n-1][j] = 'D';
            count++;
        }

        for (int i = 1; i < n-1 && count < k; i++) {
            grid[i][n-1] = 'R';
            count++;
        }

        if (count != k) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << grid[i] << "\n";
        }
    }
    return 0;
}


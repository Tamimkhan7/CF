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


void solve() {
    int n;
    cin >> n;
    vector<ll> b(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> b[i];
    
    
    vector<int> a(n + 1);
    int nextNew = 1;
    
    for (int j = 1; j <= n; j++) {
        ll diff = b[j] - b[j - 1];
        int p = j - diff;
        
        if (p == 0) {
            a[j] = nextNew++;
        } else {
            a[j] = a[p];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int32_t main()
{
    MTK;
int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}



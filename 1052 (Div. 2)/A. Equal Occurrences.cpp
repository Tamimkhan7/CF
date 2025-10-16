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

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int ans =0;
    for(int i=1;i<=100;i++){
        int cnt =0;
        for(auto [x,y]:mp){
            if(y>=i)cnt +=  i;
        }
        ans = max(ans, cnt);
    }
    cout<<ans<<'\n';

}
int32_t main()
{
    MTK;

    int t;cin>>t;
    while(t--)solve();
    return 0;
}
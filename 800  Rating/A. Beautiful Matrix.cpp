#include<bits/stdc++.h>
using namespace std;
#define MTK ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define trace(x) cout<<#x<<' '<< x <<endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main() {
    MTK;
int a[6][6];
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++)
        cin >> a[i][j];
}
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(a[i][j]==1){
            int ans = abs(i-3)+abs(j-3);
            cout<<ans<<'\n';
           return 0;
        }
    }
}
    return 0;
}
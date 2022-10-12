#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define x first
#define y second
#define pb push_back
#define sqr(x) x * x
#define fr(i, n, d, x) for(ll i = d; i < n; i += x)
#define frr(i, n, d, x) for(ll i = d; i <= n; i += x)
#define frd(i, n, d, x) for(ll i = d; i > n; i -= x)
#define frrd(i, n, d, x) for(ll i = d; i >= n; i -= x)
#define nxtp next_permutation
#define wh while
#define elif else if
#define INF LLONG_MAX
#define pi acos(-1)
#define sqrt3(x) pow(x, 1.0/3.0)
#define win95 cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
#define sqrtceil(x) (ll)ceil(sqrt((ld)x))
#define sqrtfloor(x) (ll)floor(sqrt((ld)x));
#define LOCAL
 
using namespace std;
 
ll t;
 
void solve () {
    ll n1, n, m, fl;
        fl = 1;
        cin >> n >> m;
        ll a[n][m];
        fr(i, n, 0, 1){
            fr(j, m, 0, 1){
                cin >> a[i][j];
            }
        }
        fr(i, n - 1, 0, 1){
            fr(j, m - 1, 0, 1){
                if ((a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1]) % 4 == 0) fl = 0;
            }
        }
        cout << (fl ? "YES\n" : "NO\n");
}
 
int main(){
    win95;
    //t = 1;
    //ll read;
    cin >> t;
    while (t--) {
        solve();
        //cin >> read;
    }
}

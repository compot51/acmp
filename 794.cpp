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
    ll n, m, k;
    cin >> n >> m >> k;
    cout << n * (m / k + min (m, k - 1));
}
 
int main(){
    win95;
    t = 1;
    //ll read;
    //cin >> t;
    while (t--) {
        solve();
        //cin >> read;
    }
 
}

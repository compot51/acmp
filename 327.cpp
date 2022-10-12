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
 
int main(){
    win95;
    ll n;
    cin >> n;
    fr (i, n, 0, 1) {
        ll r;
        cin >> r;
        r++;
        ll n1, n2, n3, n4, n5, n6;
        n1 = r / 100000;
        n2 = r / 10000 % 10;
        n3 = r / 1000 % 10;
        n4 = r / 100 % 10;
        n5 = r / 10 % 10;
        n6 = r % 10;
        if (n1 + n2 + n3 == n4 + n5 + n6)
            cout << "Yes\n";
        else {
            r -= 2;
            n1 = r / 100000;
            n2 = r / 10000 % 10;
            n3 = r / 1000 % 10;
            n4 = r / 100 % 10;
            n5 = r / 10 % 10;
            n6 = r % 10;
            if (n1 + n2 + n3 == n4 + n5 + n6)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}

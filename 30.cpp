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
#define dist(x1, y1, x2, y2) sqrt (sqr (abs (x2 - x1)) + sqr (abs (y2 - y1)))
#define win95 cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0)
#define sqrtceil(x) (ll)ceil(sqrt((ld)x))
#define sqrtfloor(x) (ll)floor(sqrt((ld)x));
#define EPS 0.01
#define LOCAL
 
using namespace std;
 
ll t;
 
void solve () {
 
    ll h1, m1, s1, h2, m2, s2, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c0 = 0, i = 1;
    char tt;
 
    cin >> h1 >> tt >> m1 >> tt >> s1 >> h2 >> tt >> m2 >> tt >> s2;
 
    //cout << h1 << " " << m1 << " " << s1 << "\n" << h2 << " " << m2 << " " << s2 << "\n";
 
    while (h1 != h2 || m1 != m2 || s1 != s2) {
        //cout << i ++ << ". " << h1 << ":" << m1 << ":" << s1 << ";\n";
        if (h1 / 10 % 10 == 0)
            c0 ++;
        if (h1 / 10 % 10 == 1)
            c1 ++;
        if (h1 / 10 % 10 == 2)
            c2 ++;
        if (h1 / 10 % 10 == 3)
            c3 ++;
        if (h1 / 10 % 10 == 4)
            c4 ++;
        if (h1 / 10 % 10 == 5)
            c5 ++;
        if (h1 / 10 % 10 == 6)
            c6 ++;
        if (h1 / 10 % 10 == 7)
            c7 ++;
        if (h1 / 10 % 10 == 8)
            c8 ++;
        if (h1 / 10 % 10 == 9)
            c9 ++;
 
        if (h1 % 10 == 0)
            c0 ++;
        if (h1 % 10 == 1)
            c1 ++;
        if (h1 % 10 == 2)
            c2 ++;
        if (h1 % 10 == 3)
            c3 ++;
        if (h1 % 10 == 4)
            c4 ++;
        if (h1 % 10 == 5)
            c5 ++;
        if (h1 % 10 == 6)
            c6 ++;
        if (h1 % 10 == 7)
            c7 ++;
        if (h1 % 10 == 8)
            c8 ++;
        if (h1 % 10 == 9)
            c9 ++;
 
        if (m1 / 10 % 10 == 0)
            c0 ++;
        if (m1 / 10 % 10 == 1)
            c1 ++;
        if (m1 / 10 % 10 == 2)
            c2 ++;
        if (m1 / 10 % 10 == 3)
            c3 ++;
        if (m1 / 10 % 10 == 4)
            c4 ++;
        if (m1 / 10 % 10 == 5)
            c5 ++;
        if (m1 / 10 % 10 == 6)
            c6 ++;
        if (m1 / 10 % 10 == 7)
            c7 ++;
        if (m1 / 10 % 10 == 8)
            c8 ++;
        if (m1 / 10 % 10 == 9)
            c9 ++;
 
        if (m1 % 10 == 0)
            c0 ++;
        if (m1 % 10 == 1)
            c1 ++;
        if (m1 % 10 == 2)
            c2 ++;
        if (m1 % 10 == 3)
            c3 ++;
        if (m1 % 10 == 4)
            c4 ++;
        if (m1 % 10 == 5)
            c5 ++;
        if (m1 % 10 == 6)
            c6 ++;
        if (m1 % 10 == 7)
            c7 ++;
        if (m1 % 10 == 8)
            c8 ++;
        if (m1 % 10 == 9)
            c9 ++;
 
        if (s1 / 10 % 10 == 0)
            c0 ++;
        if (s1 / 10 % 10 == 1)
            c1 ++;
        if (s1 / 10 % 10 == 2)
            c2 ++;
        if (s1 / 10 % 10 == 3)
            c3 ++;
        if (s1 / 10 % 10 == 4)
            c4 ++;
        if (s1 / 10 % 10 == 5)
            c5 ++;
        if (s1 / 10 % 10 == 6)
            c6 ++;
        if (s1 / 10 % 10 == 7)
            c7 ++;
        if (s1 / 10 % 10 == 8)
            c8 ++;
        if (s1 / 10 % 10 == 9)
            c9 ++;
 
        if (s1 % 10 == 0)
            c0 ++;
        if (s1 % 10 == 1)
            c1 ++;
        if (s1 % 10 == 2)
            c2 ++;
        if (s1 % 10 == 3)
            c3 ++;
        if (s1 % 10 == 4)
            c4 ++;
        if (s1 % 10 == 5)
            c5 ++;
        if (s1 % 10 == 6)
            c6 ++;
        if (s1 % 10 == 7)
            c7 ++;
        if (s1 % 10 == 8)
            c8 ++;
        if (s1 % 10 == 9)
            c9 ++;
 
        s1 ++;
        if (s1 == 60) {
            s1 = 0;
            m1 ++;
        }
        if (m1 == 60) {
            m1 = 0;
            h1 ++;
        }
        h1 %= 24;
    }
    if (h1 / 10 % 10 == 0)
            c0 ++;
        if (h1 / 10 % 10 == 1)
            c1 ++;
        if (h1 / 10 % 10 == 2)
            c2 ++;
        if (h1 / 10 % 10 == 3)
            c3 ++;
        if (h1 / 10 % 10 == 4)
            c4 ++;
        if (h1 / 10 % 10 == 5)
            c5 ++;
        if (h1 / 10 % 10 == 6)
            c6 ++;
        if (h1 / 10 % 10 == 7)
            c7 ++;
        if (h1 / 10 % 10 == 8)
            c8 ++;
        if (h1 / 10 % 10 == 9)
            c9 ++;
 
        if (h1 % 10 == 0)
            c0 ++;
        if (h1 % 10 == 1)
            c1 ++;
        if (h1 % 10 == 2)
            c2 ++;
        if (h1 % 10 == 3)
            c3 ++;
        if (h1 % 10 == 4)
            c4 ++;
        if (h1 % 10 == 5)
            c5 ++;
        if (h1 % 10 == 6)
            c6 ++;
        if (h1 % 10 == 7)
            c7 ++;
        if (h1 % 10 == 8)
            c8 ++;
        if (h1 % 10 == 9)
            c9 ++;
 
        if (m1 / 10 % 10 == 0)
            c0 ++;
        if (m1 / 10 % 10 == 1)
            c1 ++;
        if (m1 / 10 % 10 == 2)
            c2 ++;
        if (m1 / 10 % 10 == 3)
            c3 ++;
        if (m1 / 10 % 10 == 4)
            c4 ++;
        if (m1 / 10 % 10 == 5)
            c5 ++;
        if (m1 / 10 % 10 == 6)
            c6 ++;
        if (m1 / 10 % 10 == 7)
            c7 ++;
        if (m1 / 10 % 10 == 8)
            c8 ++;
        if (m1 / 10 % 10 == 9)
            c9 ++;
 
        if (m1 % 10 == 0)
            c0 ++;
        if (m1 % 10 == 1)
            c1 ++;
        if (m1 % 10 == 2)
            c2 ++;
        if (m1 % 10 == 3)
            c3 ++;
        if (m1 % 10 == 4)
            c4 ++;
        if (m1 % 10 == 5)
            c5 ++;
        if (m1 % 10 == 6)
            c6 ++;
        if (m1 % 10 == 7)
            c7 ++;
        if (m1 % 10 == 8)
            c8 ++;
        if (m1 % 10 == 9)
            c9 ++;
 
        if (s1 / 10 % 10 == 0)
            c0 ++;
        if (s1 / 10 % 10 == 1)
            c1 ++;
        if (s1 / 10 % 10 == 2)
            c2 ++;
        if (s1 / 10 % 10 == 3)
            c3 ++;
        if (s1 / 10 % 10 == 4)
            c4 ++;
        if (s1 / 10 % 10 == 5)
            c5 ++;
        if (s1 / 10 % 10 == 6)
            c6 ++;
        if (s1 / 10 % 10 == 7)
            c7 ++;
        if (s1 / 10 % 10 == 8)
            c8 ++;
        if (s1 / 10 % 10 == 9)
            c9 ++;
 
        if (s1 % 10 == 0)
            c0 ++;
        if (s1 % 10 == 1)
            c1 ++;
        if (s1 % 10 == 2)
            c2 ++;
        if (s1 % 10 == 3)
            c3 ++;
        if (s1 % 10 == 4)
            c4 ++;
        if (s1 % 10 == 5)
            c5 ++;
        if (s1 % 10 == 6)
            c6 ++;
        if (s1 % 10 == 7)
            c7 ++;
        if (s1 % 10 == 8)
            c8 ++;
        if (s1 % 10 == 9)
            c9 ++;
    cout << c0 << "\n" << c1 << "\n" << c2 << "\n" << c3 << "\n" << c4 << "\n" <<
            c5 << "\n" << c6 << "\n" << c7 << "\n" << c8 << "\n" << c9 << "\n";
 
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
    return 0;
}

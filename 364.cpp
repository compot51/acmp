#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main () {
    ll a[] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};
    ll n, m, fl = 0;
    cin >> n >> m;
    for (int i = 0; i < 8; i ++) {
        if (a[i] <= m && a[i] >= n) {
            fl = 1;
            cout << a[i] << "\n";
        }
    }
    if (!fl)
        cout << "Absent";
}

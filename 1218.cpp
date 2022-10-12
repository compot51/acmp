#include <bits/stdc++.h>
using namespace std;
 
int i, l=0, r, n, m, x, a[101];
  
int main() {
    cin >> n;
    r=n;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    cin >> x;
    if (x<=a[n]) {
        cout << n+1;
        return 0;
    }
    while (l+1<r) {
        m=(l+r)/2;
        if (x>a[m]) r=m;
        else l=m;
    }
    cout << r;
}

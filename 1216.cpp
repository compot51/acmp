#include <iostream>
using namespace std;
 
int mx=-1001, imx, l, r, n, a[1000];
 
int main() {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    cin >> l >> r;
    imx=l; 
    for (int i=l; i<=r; i++) {
        if (a[i]>mx) {
            mx=a[i];
            imx=i;
        }
    }
    cout << mx << " " << imx;
}

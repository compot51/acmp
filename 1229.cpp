#include <iostream>         // |AB|^2=|Xb-Xa|^2+|Yb-Ya|^2
using namespace std;
  
long long sqr_segm(int xa, int ya, int xb, int yb) {
    long long dx=xb-xa, dy=yb-ya;
    return dx*dx+dy*dy;
}
  
int main() {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    long long d1_2=sqr_segm(xa, ya, xb, yb),
    d2_2=sqr_segm(xb, yb, xc, yc),
    d3_2=sqr_segm(xc, yc, xa, ya);
    if (d2_2<d3_2) swap(d2_2, d3_2);
    if (d1_2<d2_2) swap(d1_2, d2_2);
    if (d1_2==d2_2+d3_2) cout << "Yes";
    else cout << "No";
    return 0;
}

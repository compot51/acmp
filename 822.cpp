#include <bits/stdc++.h>
using namespace std;
 
double sqr_segm(int xa, int ya, int xb, int yb) {
    long long dx=xb-xa, dy=yb-ya;
    return sqrt(dx*dx+dy*dy);
}
 
int main() {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
         double d1=sqr_segm(xa, ya, xb, yb),
        d2=sqr_segm(xb, yb, xc, yc),
        d3=sqr_segm(xc, yc, xa, ya),
    p=(d1+d2+d3)/2;
    double s=sqrt(p*(p-d1)*(p-d2)*(p-d3));
    s=s*2+0.001;
    long long S=s;
    cout << S/2;
    if (S%2) cout << ".5";
    return 0;
}
